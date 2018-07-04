#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string fname, sname, adm_no, gender;
string icsAll[113][4];
string icsA[57][4];
string icsB[58][4];
string icsGirls[42][4];
string icsBoys[71][4];

void trial();

void input()
{

	ifstream icsa("inputICSA.csv");


	if (!icsa.is_open())
		cout << "There was an error opening the file \n";

	cout << "ICS A MEMBERS \n";
	cout << endl;

	while (icsa.good())
	{
				getline(icsa, adm_no, ',');
				getline(icsa, sname, ',');
				getline(icsa, fname, ',');
				getline(icsa, gender, '|');

				cout << adm_no<<setw(2) << sname <<setw(2)<< fname <<setw(2)<< gender<<setw(2) << endl;

		}
	
	cout << endl;
	cout << "------------------------------------------" << "\n";
	cout << "\n";


	cout << "ICS B MEMBERS \n";
	cout << endl;

	ifstream icsb("inputICSB.csv");

	if (!icsb.is_open())
		cout << "There was an error opening the file \n";


	
	while (icsb.good())
	{
				getline(icsb, adm_no, ',');
				getline(icsb, sname, ',');
				getline(icsb, fname, ',');
				getline(icsb, gender, '|');

	
			cout << adm_no << sname << fname << gender << endl;

	}
	cout << endl;

	cout << "------------------------------------------" << "\n";
	cout << "\n";

	cout << "ICS C MEMBERS";
	cout << endl;


	ifstream icsc("inputICSC.csv");


	if (!icsc.is_open())
		cout << "There was an error opening the file \n";

	while (icsc.good())
	{
	
				getline(icsc, adm_no, ',');
				getline(icsc, sname, ',');
				getline(icsc, fname, ',');
				getline(icsc, gender, '|');
		
			
				cout << adm_no << sname << fname << gender << endl;
	}
	cout << "------------------------------------------" << "\n";
	cout << "\n";


}


void randomize()
{
	int row, col;

	ifstream icsa("inputICSA.csv");
	

	if (!icsa.is_open())
	cout << "There was an error opening the file \n";
	
	while (icsa.good())
	{
		
		for (row = 0; row < 30; row++)
		{

			for (col = 0; col < 4; col++)
			{
				if (col == 3) {
					getline(icsa, icsAll[row][col], '|');
					
				}
				else {
					getline(icsa, icsAll[row][col], ',');
				}
			}
		}
	}

	ifstream icsb("inputICSB.csv");

	if (!icsb.is_open())
	cout << "There was an error opening the file \n";



	while (icsb.good())
	{
		for (row = 30; row < 58; row++)
		{
			for (col = 0; col < 4; col++)
			{
				if (col == 3) {
					getline(icsb, icsAll[row][col], '|');
					
				}
				else {
					getline(icsb, icsAll[row][col], ',');
				}
			}
		}
	}

	ifstream icsc("inputICSC.csv");


	if (!icsc.is_open())
	cout << "There was an error opening the file \n";

	while (icsc.good())
	{
		for (row = 58; row < 113; row++)
		{
			for (col = 0; col < 4; col++)
			{
				if (col == 3) {
					getline(icsc, icsAll[row][col], '|');
				}
				else {
					getline(icsc, icsAll[row][col], ',');
				}
			}
		}
	}


	/* for (int a = 0; a <113; a++) 
	{
		for (int b = 0; b < 4; b++) 
		{
			cout << icsAll[a][b];
		}
	}

	cout << endl; */
	


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

	cout << endl;


	switch (choice)
	{

	case '1':
	{

		input();
		break;
	}

	case '2':
	{
		trial();
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



















void trial()
{
	int row, col;
	ifstream icsa("inputICSA.csv");

	if (!icsa.is_open())
	{
		cout << "There was an error opening the file \n";
	}

	while (icsa.good())
	{
  		getline(icsa, adm_no, ',');
		getline(icsa, sname, ',');
		getline(icsa, fname, ',');
		getline(icsa, gender, '\n');

		if (gender == "M")
		{
			
		}

		else 
			if(gender == "F")
		{
			
			
		}

		
	}

	ifstream icsb("inputICSB.csv");

	if (!icsb.is_open())
		cout << "There was an error opening the file \n";

	while (icsb.good())
	{
		getline(icsb, adm_no, ',');
		getline(icsb, sname, ',');
		getline(icsb, fname, ',');
		getline(icsb, gender, '\n');

	}
	
	ifstream icsc("inputICSC.csv");
	
	if (!icsc.is_open())
		cout << "There was an error opening the file \n";

	while (icsc.good())
	{
		getline(icsc, adm_no, ',');
		getline(icsc, sname, ',');
		getline(icsc, fname, ',');
		getline(icsc, gender, '\n');
	}






}

