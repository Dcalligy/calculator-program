#include "stdafx.h"
#include <iostream>

using namespace std;

// prototypes 
int add(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int quo(int x, int y);


int main()
{
	int userChoice;
	int num1, num2;

	do {
		cout << "Which operation would you like to perform: \n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Divide \n";
		cout << "5. Exit menu\n";
		cin >> userChoice;

		switch (userChoice) {
		case 1:
			cout << "Choose the first number you would like to add: \n";
			cin >> num1;
			cout << "Choose the second number you would like to add: \n";
			cin >> num2;
			cout << "The sum of the numbers is: " << add(num1, num2) << '\n';
			break;
		case 2:
			cout << "Pick the first number you would like to subtract: \n";
			cin >> num1;
			cout << "Choose the second number you would like to subtract: \n";
			cin >> num2;
			cout << "The difrence between the two numbers is: " << sub(num1, num2) << '\n';
			break;
		case 3:
			cout << "Choose the first nummber you would like to multiply: " << '\n';
			cin >> num1;
			cout << "Choose the second nummber you would like to multiply: " << '\n';
			cin >> num2;
			cout << "The product of the two numbers is: " << mult(num1, num2) << '\n';
			break;
		case 4:
			cout << "Choose the first nummber you would like to divide: " << '\n';
			cin >> num1;
			cout << "Choose the second nummber you would like to divide: " << '\n';
			cin >> num2;
			cout << "The quotient of the two numbers is: " << quo(num1, num2) << '\n';
			break;
		default:
			cout << "Exiting program...cya! \n";
			break;
		}
	} while (userChoice != 5);// exits menu 

	system("pause");
	return 0;
}

// returns sum
int add(int x, int y) {
	return x + y;
}

// returns the difference 
int sub(int x, int y) {
	return x - y;
}

// returns the product
int mult(int x, int y) {
	return x * y;
}

// returns the quotient
int quo(int x, int y) {
	return x / y;
}
