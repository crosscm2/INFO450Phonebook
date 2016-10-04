// INFO450Phonebook.cpp : Defines the entry point for the console application.
// This program has some weird output that I can't fix aaaaaahhhh!!!

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std; 

void SetPhoneBook(char ph[10][2][50])
{
	static int p;
	int i, j, k;

	{

		{
			cout << "\nEntry : " << p + 1;
			cout << "\n Please Enter Name : ";
			cin >> ph[p][0];
			cout << "\n Please Enter phone number : "; 
			cin >> ph[p][1];
		}
		p++;
	}
}
void PrintPhoneBook(char ph[10][2][50])
{
	int i, j, k;
	cout << "\n";
	for (i = 0; i < 10; i++)
	{

		{
			cout << "\n " << i << ph[i][0] << " " << ph[i][1];
		}
	}
}
int main()
{
	char ph[10][2][50];
	int i, j, k;
	char choice = 'A';
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 13; k++)
				ph[i][j][k] = '-';
		}
	}


	do
	{
		cout << "\n ------------------------------------";
		cout << "\n What do you want to do?";
		cout << "\n ------------------------------------";
		cout << "\n [A]dd new entry == enter A";
		cout << "\n [D]isplay == enter D";
		cout << "\n [Q]uit == enter Q" << endl;
		cin >> choice;

		switch (choice)
		{
		case 'A': SetPhoneBook(ph); break;
		case 'D': PrintPhoneBook(ph); break;
		default: break;
		}
	} while (choice == 'A' || choice == 'D');


	return 0;
}