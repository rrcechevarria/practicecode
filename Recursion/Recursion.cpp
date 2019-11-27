// Practice code 1
// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

int fact(int num)
{
	//int f;
	if (num <= 1)
		return 1;
	//f = num * fact(num - 1);
	return num * fact(num - 1);
}

bool checkPrime(int num, int temp)
{
	if (temp == 1)
		return 1;

	if (num % temp == 0)
		return false;
	else
		return checkPrime(num, temp - 1);
}

int main()
{
	int num, factorial;
	cout << "Enter a number: ";
	cin >> num;

	factorial = fact(num);
	cout << "\nFactorial of " << num << " is: " << factorial;

	bool prime = true;	
	cout << "\nEnter number to check if Prime: ";
	cin >> num;
	if (num == 1)
		cout << endl << num << " is a special number";
	else
	{
		prime = checkPrime(num, num/2);
		if (prime == true)
			cout << endl << num << " is prime";
		else
			cout << endl << num << " is not prime";
	}
	_getch();
	return 0;
}

