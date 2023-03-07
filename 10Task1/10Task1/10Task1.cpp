/*Task1. The user enters a number. Determine the number of digits in this number, calculate their sum and the arithmetic mean. 
Determine the number of zeros in this number. Communication with the user can be organized through the menu*/

#include <iostream>
using namespace std;

int main()
{
	int num;

	// Code lines 12, 13, 14 - are to make simple interface with instructions for user 
	cout << "Using this programm you can determine the number of digits in the number,\n\ncalculate their sum and the arithmetic mean.\n" << endl;
	cout << "Also determine the number of zeros in this number. " << endl;
	cout << "\nTo exit the program enter 0. " << endl;

	while (true) { // Beginning of the endless loop

		cout << "\nEnter the number: "; cin >> num; // User enters the nuber

		if (num == 0) { // Ending program if user enters zero

			cout << "Exit program." << endl;
			break;
		}
		else { // Main part of the code where all the calculations are 


			int digitCount = 0, sum = 0, zeroCount = 0; // Variables for the calculations. Named accordingly for understanding ("zeroCount" for counting zeros in the number, etc)
			float mean = 0.0; // Float is used since we may get fractional number when dividing

			int temp = num; // Temporary veriabe for our number to make proper calculations 
			while (temp != 0) {

				int digit = temp % 10; // Here we make calculations both for counting digits and countig zeros

				if (digit == 0) { // If remainder from division by 10 will be 0 that means digit is 0

					zeroCount++; // So here we count amount of zeros
				}

				digitCount++; // When dividing by ten is possible, we add 1 to digit counter each time, so we know the number of digits

				sum += digit; // Calculating sum of digets

				temp /= 10; // Correcting our number value
			}

			if (digitCount > 0) { // Determinating the arithmetic mean.

				mean = (float)sum / digitCount; // Sum of the values divided by it`s amout gives us the arithmetic mean.
			}

			cout << "The number of digits: " << digitCount << endl; // Code lines 53-56 are for output to the user
			cout << "Sum of all digits in the number: " << sum << endl;
			cout << "Arithmetic mean of the digits: " << mean << endl;
			cout << "The number of zeros in the number: " << zeroCount << endl;

		}
		
	}
}