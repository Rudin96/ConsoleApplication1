// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	string Name = "";
	string Name2 = "";
	int iSecret;
	int	iGuess;

	srand(time(NULL));

	iSecret = rand() % 9 + 1;

	do {
		cout << "Gissa det hemliga talet" << endl;
		cin >> iGuess;

		

		if (iSecret < iGuess) {

			cout << "Talet är ¨mindre" << endl;
			//cin >> iGuess;

		}
		else if (iSecret > iGuess) {

			cout << "Talet är större" << endl;
			//cin >> iGuess;
		}
		else if (iSecret == iGuess) {

			cout << "Du gissade rätt, det hemliga talet var: " << iSecret << endl;

		}
	} while (iGuess != iSecret);
	//cin >> Name;
	//cout << "Hej, "<<Name << endl;
	//cout << "Ange Temperatur:";
	//cin >> age;
	//cout <<"Idag är det "<<age<<" grader." << endl;
	//cin >> age;
	//cout << "Jag är " << age << "år gammal";
}