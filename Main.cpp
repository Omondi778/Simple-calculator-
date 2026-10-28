// Week 2 - Task 3: Simple Calculator (switch statement)
// Performs +, -, *, / on two numbers, handling division by zero.

#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char op;

    // Prompt the user for values
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> number2;

    // switch statement to perform the selected operation
    switch (op) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << number1 << " + " << number2 << " = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << number1 << " - " << number2 << " = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << number1 << " * " << number2 << " = " << result << endl;
            break;

        case '/':
            // Handle division by zero
            if (number2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = number1 / number2;
                cout << "Result: " << number1 << " / " << number2 << " = " << result << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator. Use +, -, * or /." << endl;
    }

    return 0;
}
