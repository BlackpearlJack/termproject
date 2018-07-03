#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream icsa("inputICSA.csv");

	if (!icsa.is_open())
		cout << "There was an error icsb opening the file \n";


	string name, adm_no, gender;

	cout << "ICS A MEMBERS \n\n";

	while (icsa.good())
	{
		getline(icsa, adm_no, '|');
		getline(icsa, name, '|');
		getline(icsa, gender, '|');

		cout <<adm_no << "\n";
		cout <<name << "\n";
		cout <<gender << "\n";
		cout << "------------------------------------------" << "\n";

	}

	system("pause");
	cout << "\n\n";

	ifstream icsb("inputICSB.csv");

	if (!icsb.is_open())
		cout << "There was an error icsb opening the file \n";



	cout << "ICS B MEMBERS \n\n";

	while (icsb.good())
	{
		getline(icsb, adm_no, '|');
		getline(icsb, name, '|');
		getline(icsb, gender, '|');

		cout << adm_no << "\n";
		cout << name << "\n";
		cout << gender << "\n";
		cout << "------------------------------------------" << "\n";

	}

	system("pause");

	cout<<"\n\n";

	ifstream icsc("inputICSC.csv");

	if (!icsc.is_open())
		cout << "There was an error icsb opening the file \n";

	cout << "ICS C MEMBERS \n\n";

	while (icsc.good())
	{
		getline(icsc, adm_no, '|');
		getline(icsc, name, '|');
		getline(icsc, gender, '|');

		cout << adm_no << "\n";
		cout << name << "\n";
		cout << gender << "\n";
		cout << "------------------------------------------" << "\n";

	}

	system("pause");
	
    return 0;
}
