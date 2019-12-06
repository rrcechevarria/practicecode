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

int fibo(int n, int mem[]) {
	int result;
	if (mem[n])
		return mem[n];
	if (n == 1 || n == 2)
		result = 1;
	else
		result = fibo(n - 1, mem) + fibo(n - 2, mem);
	mem[n] = result;
	return result;
}

int main()
{
	int num, factorial, choice;
	bool prime = true;

	cout << "1. Factorial \n"
		<< "2. Prime \n"
		<< "3. Fibonacci \n";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		cout << "Enter a number: ";
		cin >> num;
		factorial = fact(num);
		cout << "\nFactorial of " << num << " is: " << factorial;
		break;
	case 2:
		
		cout << "\nEnter number to check if Prime: ";
		cin >> num;
		if (num == 1)
			cout << endl << num << " is a special number";
		else
		{
			prime = checkPrime(num, num / 2);
			if (prime == true)
				cout << endl << num << " is prime";
			else
				cout << endl << num << " is not prime";
		}
		break;
	case 3:
		int  mem[100] = { 0 };
		cout << "\nEnter a number to find fibonacci equivalent ";
		cin >> num;
		cout << "\nFibonacci value: " << fibo(num, mem);
		break;
	}


	
	_getch();
	return 0;
}

