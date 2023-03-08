/*Task2. Write a program that displays a chessboard with a given cell size on the screen.*/

#include <iostream>
using namespace std;

int main()
{
    int cell_size;

    cout << "This program can manage chessboard with a given cell size." << endl; // Simple interface
    cout << "Enter 0 for exit." << endl;
        
    while (true) { //Endles loop so user can try different sizes

        cout << "\nEnter cell size: "; // Input for value
        cin >> cell_size;

        if (cell_size != 0) { // This "if" is used for calculations. If user enters 0 program ends

            const int board_size = 8 * cell_size; // Calculate board size
            for (int i = 0; i < board_size; i++) { // Loop for board rows

                for (int j = 0; j < board_size; j++) { // Loop for board columns

                    if ((i / cell_size) % 2 == (j / cell_size) % 2) { // Determine whether to print '*' or '-'

                        cout << "*";
                    }
                    else {

                        cout << "-";
                    }
                }
                cout << endl;
            }
        }
        else { // If user enters 0 program ends

            cout << "Exiting program..." << endl;
            break;
        }
    }
}