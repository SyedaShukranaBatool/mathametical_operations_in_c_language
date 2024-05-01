#include <iostream>

using namespace std;

int main() {
    // Display developer's name and student ID
    cout << "Developer: Syeda Shukrana Batool Jafferi\n";
    cout << "Student ID: BC220419308\n\n";

    // Menu options
    cout << "Simple Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n\n";

    // Variable to store user's choice
    int choice;
    
    do {
        // Prompt user for choice
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        // Perform operation based on user's choice
        switch (choice) {
            case 1: {
                double num1, num2;
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            }
            case 2: {
                double num1, num2;
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            }
            case 3: {
                double num1, num2;
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            }
            case 4: {
                double num1, num2;
                cout << "Enter two numbers to divide: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            }
            case 5: {
                cout << "Exiting program. Thank you!\n";
                break;
            }
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}