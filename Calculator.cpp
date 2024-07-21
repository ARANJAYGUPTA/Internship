#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;bb

    cout << "Enter first digits: ";
    cin >> num1;

    cout << "Enter second digits: ";
    cin >> num2;

    cout << "Choose an operation to perform (+, -, *, /): ";
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
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Error: Division by zero";
            }
            break;
        default:
            cout << "Invalid operation";
            break;
    }

    return 0;
}


