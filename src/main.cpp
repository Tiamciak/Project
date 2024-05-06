#include <iostream>

#include "code.hpp"

using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter the first digit: ";
    cin >> num1;

    cout << "Type operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second digit: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << dodawanie(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << odejmowanie(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << mnozenie(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << dzielenie(num1, num2) << endl;
            } else {
                cout << "Error! Dividing by 0 is not possible!" << endl;
                return -1;
            }
            break;
        default:
            cout << "Error! Unknown operator. " << endl;
            return -1;
    }
    return 0;
}