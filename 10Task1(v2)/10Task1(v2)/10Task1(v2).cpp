/*Task1. The user enters a number. Determine the number of digits in this number, calculate their sum and the arithmetic mean. 
Determine the number of zeros in this number. Communication with the user can be organized through the menu

This is the second version of the task. Calculations are the same, but here, the user can choose an option what he wants to know
Also user can operate with the same number only*/

#include <iostream>
using namespace std;

int main() {

    int num, digitCount = 0, sum = 0, zeroCount = 0; // Variables for the calculations. Named accordingly for understanding ("zeroCount" for counting zeros in the number, etc)
    float mean = 0.0; // Float is used since we may get fractional number when dividing

    cout << "Enter a number: "; // Input for user
    cin >> num;

    int temp = num;  // Determine number of digits and their sum

    while (temp != 0) {  // Calculations are the same as in version 1

        int digit = temp % 10;

        if (digit == 0) {

            zeroCount++;
        }

        digitCount++;
        sum += digit;
        temp /= 10;
    }

    if (digitCount > 0) {  // Determine mean

        mean = (float)sum / digitCount;
    }

    int choice; // Output results
    do { // "do" shows the options for the user
        cout << "\nPlease choose an option:\n";
        cout << "1. Number of digits\n";
        cout << "2. Sum of digits\n";
        cout << "3. Arithmetic mean of digits\n";
        cout << "4. Number of zeros\n";
        cout << "5. Exit\n";
        cin >> choice; // User`s choice

        switch (choice) { // Switch executes one of the option
        case 1:
            cout << "Number of digits: " << digitCount << endl;
            break;
        case 2:
            cout << "Sum of digits: " << sum << endl;
            break;
        case 3:
            cout << "Arithmetic mean of digits: " << mean << endl;
            break;
        case 4:
            cout << "Number of zeros: " << zeroCount << endl;
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 5); // Exiting program 

    return 0;
}