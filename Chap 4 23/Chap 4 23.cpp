// Chap 4 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double const pi = 3.1415926353897;

int main()
{
    int selector;
    double output;
        cout << "GEOMETRY AREA CALCULATOR!!!!!" << endl;
    menu:
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit" << endl;
        do {
            cin >> selector;

            if (selector < 1 || selector > 4) {
                cout << "INVALID" << endl;
            }
        } while (selector < 1 || selector > 4);
        int input1, input2;
        if (selector == 1) {
            cout << "CIRCLE CALCULATOR" << endl;
            cout << "please enter a radius" << endl;
            do {
                cin >> input1;

                if (input1 < 0) {
                    cout << "INVALID" << endl;
                }
            } while (input1 < 0);
            output = input1 * input1 * pi;
            cout << "The area of your circle is " << output << "." << endl;
            goto menu;
        }
        else if (selector == 2) {
            cout << "RECTANGLE CALCULATOR" << endl;
            cout << "please enter a length and a width" << endl;
            do {
                cin >> input1;

                if (input1 < 0) {
                    cout << "INVALID" << endl;
                }
            } while (input1 < 0);
            cout << "please enter a width" << endl;
            do {
                cin >> input2;

                if (input2 < 0) {
                    cout << "INVALID" << endl;
                }
            } while (input2 < 0);
            output = input1 * input2;
            cout << "The area of your rectangle is " << output << "." << endl;
            goto menu;
        }
        else if (selector == 3) {
            cout << "TRIANGLE CALCULATOR" << endl;
            cout << "please enter a length" << endl;
            do {
                cin >> input1;

                if (input1 < 0) {
                    cout << "INVALID" << endl;
                }
            } while (input1 < 0);
            cout << "please enter a width" << endl;
            do {
                cin >> input2;

                if (input2 < 0) {
                    cout << "INVALID" << endl;
                }
            } while (input2 < 0);
            output = input1 * input2 * 0.5;
            cout << "The area of your rectangle is " << output << "." << endl;
            goto menu;
        }
        else if (selector == 4) {
            cout << "Goodbye!" << endl;
        }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
