//<Ε>::=(<Υ>)                 Ε -> (Υ)
//<Υ>::=<Α><Β>                Υ -> ΑΒ
//<Α>::=ν|<Ε>                 Α -> ν | ε
//<Β>::=-<Υ>|+<Υ>|ε           Β -> -Υ | +Υ | ε

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
	int random;          //Προσθήκη τυχαίου αριθμού έγια κάλυψη όλων των περιπτώσεων
	string fs = "Ε";    //Αρχικό σύμβολο 
	int v = 0;          //Μετρητής βημάτων
	bool flag = true;
	srand(time(NULL));

	while (flag) //Όσο η σημαία είναι ΑΛΗΘΗΣ
	{
		flag = false; 
		for (int i = 0; i < fs.length(); i++)
		{
			if (fs[i] == 'Ε') //Αν το αρχικό σύμβολο είναι το Ε τότε θα αντικαταστήσουμε το μη-τερματικό σύμβολο Υ
			{
				flag = true;
				fs.replace(i, 1, "(Y)"); //Αντικατάσταση έτσι ώστε να οδηγηθούμε σε τερματικά σύμβολα
				v = v + 1; //Αύξηση βήματος
				cout << v << "o step " << ": " << fs << "\n";  //Εμφάνιση του βήματος
				break;
			}
			else if (fs[i] == 'Y') //Αν ως μη-τερματικό σύμβολο έχουμε το Υ 
			{
				flag = true;
				fs.replace(i, 1, "AB"); //Αντικαθιστουμε με ΑΒ 
				v = v + 1; //Αύξηση βήματος
				cout << v << "o step " << ": " << fs << "\n";
				break;
			}
			else if (fs[i] == 'A') //Αν ως μη-τερματικό σύμβολο έχουμε το Α
			{
				flag = true;
				v = v + 1; //Αύξηση βήματος
				random = rand() % 2; 
				if (random == 0) //Πρώτη περίπτωση για το μη-τερματικό σύμβολο Α
				{
					fs.replace(i, 1, "v"); 
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
				else if (random == 1) //Δεύτερη περίπτωση για το μη-τερματικό σύμβολο Α
				{
					fs.replace(i, 1, "Ε"); 
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
			}

			else if (fs[i] == 'B')
			{
				flag = true;
				v = v + 1; //Αύξηση βήματος
				random = rand() % 3; 
				if (v > 20) //Εάν φτάσει στα 20 βήματα να αντικαθιστά το Β με τον τελευταίο κανόνα που είναι το κενό
				{
					fs.replace(i, 1, "");
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
				else if (random == 0) //Πρώτη περίπτωση για το μη-τερματικό σύμβολο Β
				{
					fs.replace(i, 1, "-Y");
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
				else if (random == 1) //Δεύτερη περίπτωση για το μη-τερματικό σύμβολο Β 
				{
					fs.replace(i, 1, "+Y");
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
				else if (random == 2) //Τρίτη περίπτωση για το μη-τερματικό σύμβολο Β
				{
					fs.replace(i, 1, ""); //Το ε συμβολίζεται ως το κενο οπότε αντικαθιστώ το ε με κενό
					cout << v << "o step " << ": " << fs << "\n";
					break;
				}
			}
		}
	}
	cout << "The Final Result is: " << fs;
	cin.get();
	return 0;
}