#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}
