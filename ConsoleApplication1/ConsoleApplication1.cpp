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
	int ANumber;

	cout << "Skriv ett tal" << endl;
	cin >> ANumber;

	cout << (ANumber < 0 ? "Talet är negativt" : "Talet är Positivt") << endl;
}