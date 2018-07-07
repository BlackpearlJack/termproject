// Student Shuffle Algorithim 

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <algorithm>

using namespace std;

string icsAll[115][4];
string girls[42][4];
string boys[71][4];
string icsA[57][4];
string icsB[58][4];

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

	for (int i=0; i < 113; i++) {
		for (int j = 0; j < 113 - i; j++) {

		}
	}

	sort(icsAll[113][4].begin(), icsAll[113][4].end());
	

}

void printnew()
{
	input();
	randomize();

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
	

}

void printcsv()
{
	randomize();

	ofstream newicsa("outputICA.csv");

	newicsa.is_open();

	while (newicsa.good())
	{
		for (int i = 0; i < 57; i++)
		{
			for (int j = 0; j < 4; j++)
			{
		

			}
		}
	}

	newicsa.close();

	ofstream newicsb("outputICSB.csv");

	newicsb.is_open();

	while (newicsb.good())
	{
		for (int i = 0; i < 58; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				

			}
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
	cin >> choice;

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

		randomize();
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


