// INFO450Phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

const int MAXROW = 10 ;
const int MAXCOL = 2;
const int MAXCELL = 50;

void AddName(char mylist[][MAXCELL], int phoneNum[][MAXCELL]);
void showlist(char mylist[][MAXCELL], int phoneNum[][MAXCELL], int numEntered);


int main()
{
	char nameList[MAXROW][MAXCELL];
	int phoneNum;
	int i;
	char answer = 'y';

	for (i = 0; i < MAXROW && (answer == 'y' || answer == 'Y'); i++)
	{
		AddName(nameList, phoneNum);
		cout << "Do you want to enter another contact? Please enter Y for Yes " << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();

	}
	showlist(nameList, phoneNum, i);

	return 0;
}

void showlist(char mylist[][MAXCELL], int phoneNum[][MAXCELL], int numEntered)
{
	int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << mylist[i] << phoneNum << endl;
	}
}


void AddName(char mylist[][MAXCELL], int phoneNum[][MAXCELL])
{
	static int i = 0;
	if (i >= MAXROW)
	{
		cout << "sorry list is full!" << endl;
	}
	else
	{
		cout << "Enter name please: " << endl;
		gets_s(mylist[i]);
		cout << "Enter phone number: " << endl;
		cin >> phoneNum;
		i++;

	}
}

