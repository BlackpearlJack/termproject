#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string fname, sname, adm_no, gender;
string icsAll[113][3];
string newicsA[57][3];
string newicsB[58][3];
string girls[42][3];
string boys[71][3];
string icsA[30][3];
string icsB[28][3];
string icsC[58][3];

void input()
{
	int i, j;

	ifstream icsA("inputICSA.csv");


	if (!icsA.is_open())
		cout << "There was an error opening the file \n";

	cout << "ICS A MEMBERS \n";

	while (icsA.good())
	{
		for (i = 0; i < 30; i++)
		{
			for (j = 0; j < 3; i++)
			{
				getline(icsA, adm_no, ',');
				getline(icsA, sname, ',');
				getline(icsA, fname, ',');
				getline(icsA, gender, '\n');
			}
		}
		cout << adm_no;

		for (i = 0; i < 30; i++)
		{
			for (j = 0; j < 3; j++)
			{

				cout << adm_no << sname << fname << gender << endl;

			}

		}
	}

	
	cout << endl;
	cout << "------------------------------------------" << "\n";
	cout << "\n";


	cout << "ICS B MEMBERS \n";

	ifstream icsB("inputICSB.csv");

	if (!icsB.is_open())
		cout << "There was an error opening the file \n";


	
	while (icsB.good())
	{
		for (i = 0; i < 28; i++)
		{
			for (j = 0; j < 3; i++)
			{
				getline(icsB, adm_no, ',');
				getline(icsB, sname, ',');
				getline(icsB, fname, ',');
				getline(icsB, gender, '\n');

			}
		}

	}
	

	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << adm_no << sname << fname << gender << endl;

		}

	}
	cout << endl;

	cout << "------------------------------------------" << "\n";
	cout << "\n";

	cout << "ICS C MEMBERS \n";

	ifstream icsC("inputICSC.csv");


	if (!icsC.is_open())
		cout << "There was an error opening the file \n";

	while (icsC.good())
	{
		for (i = 0; i < 55; i++)
		{
			for (j = 0; j < 3; i++)
			{
				getline(icsC, adm_no, ',');
				getline(icsC, sname, ',');
				getline(icsC, fname, ',');
				getline(icsC, gender, '\n');
			}
		}
	}
	for (i = 0; i < 30; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << adm_no << sname << fname << gender << endl;

		}

	}
	cout << "------------------------------------------" << "\n";
	cout << "\n";


}


void randomize()
{




}



void printfunction()
{

}

int main()
{
	char choice;

	cout << "Welcome to the Student Shuffle Algorithim! \n"
		<< "1. Output names \n"
		<< "2. Print new groups \n"
		<< "3. Exit program \n\n";

	cout << "Enter choice: \n";
z:
	cin >> choice;


	switch (choice)
	{

	case '1':
	{

		input();
		break;
	}

	case '2':
	{
		input();
		printfunction();
		break;
	}

	case '3':
	{

		exit(0);
		break;
	}

	default:
	{
		cout << "Please enter valid choice! \n";
		goto z;
		break;
	}

	}


	system("pause");
	system("cls");
	main();

}



