// Student Shuffle Algorithim 

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

string icsAll[115][4];
string icsGirls[42][4];
string icsBoys[71][4];
string icsA[57][4];
string icsB[56][4];

void input()
{

	ifstream icsa("inputICSA.csv");
	string temp,data;
	if (!icsa.is_open())
		cout << "There was an error opening the file \n";

	while (icsa.good())
	{
		for (int i = 0; i < 30; i++)
		{
			getline(icsa, temp);
			stringstream ssa(temp);
			for (int j = 0; getline(ssa, data, ','); j++)
			{
				icsAll[i][j] = data;

			}
		}
	}

	ifstream icsb("inputICSB.csv");

	if (!icsb.is_open())
		cout << "There was an error opening the file \n";

	while (icsb.good())
	{
		for (int i = 30; i < 58; i++)
		{
			getline(icsb, temp);
			stringstream ssb(temp);
			for (int j = 0; getline(ssb, data, ','); j++)
			{
				icsAll[i][j] = data;
			}
		}

	}
	ifstream icsc("inputICSC.csv");
	
	if (!icsc.is_open())
		cout << "There was an error opening the file \n";

	while (icsc.good())
	{
		for (int i = 58; i < 113; i++)
		{
			getline(icsc, temp);
			stringstream ssc(temp);
			for (int j = 0; getline(ssc, data, ','); j++)
			{
				icsAll[i][j] = data;
			}
		}

	}
}

void printold() 
{
	 input();

	 char choice;

	 cout << "Select the group you want to print" << endl
		 << "1. ICS A" << endl
		 << "2. ICS B" << endl
		 << "3. ICS C" << endl;

	 cout << endl;

	 cout << "Enter choice: " << endl;
 g:
	 cin >> choice;

	 cout << endl;

	 switch (choice)
 {
	 case '1':
	 {
		int i = 0;
		int k = 30;
		 
		cout << "ICS A Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		for (i; i < k; i++)
		 {
			 for (int j = 0; j < 4; j++)
			 {
				 cout << icsAll[i][j];
			 }
			 cout << endl;
		 }

		cout << endl;
		 break;
	 }
	 case '2':
	 {
		int i = 30;
		int k = 58;

		cout << "ICS B Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		 for (i; i < k; i++)
		 {
			 for (int j = 0; j < 4; j++)
			 {
				 cout << icsAll[i][j];
			 }
			 cout << endl;
		 }

		 cout << endl;
		 break;

		}
	 case '3':
	 {
		 int i = 58;
		 int k = 113;

		 cout << "ICS C Members" << endl;
		 cout << "----------------------------------------------------------" << endl;

		 for (i; i < k; i++)
		 {
			 for (int j = 0; j < 4; j++)
			 {
				 cout << icsAll[i][j];
			 }
			 cout << endl;
		 }

		 cout << endl;
		 break;
	 }

	 default :
	 {
		 cout << "Enter valid choice !" << endl;
		 goto g;
	 }

	 cout << endl;
	 }
}

void randomize() 
{
	input();

	for (int i=0; i < 113; i++)
	{
		for (int j = 0; j < 113 - i-1; j++) 
		{
			if (icsAll[j][3] > icsAll[j + 1][3])
			{
				string temp[4];
				for (int a = 0; a < 4; a++)
				{
					temp[a] = icsAll[j][a];
					icsAll[j][a] = icsAll[j + 1][a];
					icsAll[j + 1][a] = temp[a];
				}
			}

		}
	}

	for (int i = 0; i < 42; i++) {
		for (int j = 0; j < 4; j++) {
			icsGirls[i][j] = icsAll[i][j];
		}
	}

	for (int i = 0; i < 71; i++) {
		for (int j = 0; j < 4; j++) {
			icsBoys[i][j] = icsAll[i + 42][j];
		}
	}

	for (int i = 0; i < 42; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			if (i < 21) {
				icsA[i][j] = icsGirls[i][j];
			}
			else {
				icsB[i-21][j] = icsGirls[i][j];
			}
		}
	}

	for (int i = 0; i < 71; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i < 36) 
			{
				icsA[i+21][j] = icsBoys[i][j];
			}
			else 
			{
				icsB[i-15][j] = icsBoys[i][j];
			}
		}
	}
}

void printnew()
{
	input();
	randomize();

	char choice;

	cout << "Select the group you want to print" << endl
		<< "1.New ICS A" << endl
		<< "2.New ICS B" << endl
		<< "3.ICS Males" << endl
		<< "4.ICS Females" << endl;

	cout << endl;

	cout << "Enter choice: " << endl;
z:
	cin >> choice;

	cout << endl;

	switch (choice)
	{
	case '1':
		{
		cout << "New ICS A Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		for (int i = 0; i < 57; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << icsA[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;

		break;
		}

	case '2':
		{
		cout << "New ICS B Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		for (int i = 0; i < 58; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << icsB[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;

		break;
		}

	case '3':
		{
		cout << "ICS Males Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		for (int i = 0; i < 71; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << icsBoys[i][j];
			}

			cout << endl;
		}
		cout << endl;
		cout << endl;

		break;
		}

	case '4':
		{
		cout << "ICS Female Members" << endl;
		cout << "----------------------------------------------------------" << endl;

		for (int i = 0; i < 42; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << icsGirls[i][j];
			}

			cout << endl;
		}
		cout << endl;
		cout << endl;

		break;
		}

	default:
		{
		cout << "Enter valid choice!" << endl;
		goto z;
		break;
		}
 }	

}

void printcsv()
{
	randomize();

	ofstream newicsa("outputICSA.csv");

	newicsa.is_open();

	if (newicsa.good())
	{
		for (int i = 0; i < 57; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				newicsa << icsA[i][j]<<",";

			}
			newicsa << icsA[i][3];
			newicsa << endl;
		}
	}

	newicsa.close();

	ofstream newicsb("outputICSB.csv");

	newicsb.is_open();

	if (newicsb.good())
	{
		for (int i = 0; i < 58; i++)
		{

			for (int j = 1; j < 3; j++)
			{
				newicsb << icsB[i][j] << ",";

			}
			newicsb << icsB[i][3];
			newicsb << endl;
		}
	}

	newicsb.close();

	cout << "Names printed to outputICSA.csv and outputICSB.csv" << endl;
}

int main()
{ 
	char choice;
	
	cout << "Welcome to the Student Shuffle Algorithim! \n"
		<< "\t 1. Display names \n"
		<< "\t 2. Display new groups \n"
		<< "\t 3. Print new groups to csv \n"
		<< "\t 4. Exit program \n\n";

	cout << "Enter choice: \n";
	h:
	cin>>choice;

	cout << endl;


	switch (choice)
	{

	case '1':
		{

		printold();
		break;
		}

	case '2':
		{

		printnew();
		break;

		}

	case '3':
		{

		printcsv();
		break;

		}

	case '4':
		{

		cout << "Program is exiting....."<<endl;
		Sleep(3000);
		exit(0);
		break;
		}

	default:
		{

		cout << "Please enter valid choice! \n";
		goto h;
		break;
		}
	}

	system("pause");
	system("cls");
	main();

}


