#include <iostream>

#include "code.hpp"

using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Wpisz pierwszą cyfrę: ";
    cin >> num1;

    cout << "Wpisz operator (+, -, *, /): ";
    cin >> op;

    cout << "Wpisz drugą cyfrę: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Wynik: " << num1 << " + " << num2 << " = " << dodawanie(num1, num2) << endl;
            break;
        case '-':
            cout << "Wynik: " << num1 << " - " << num2 << " = " << odejmowanie(num1, num2) << endl;
            break;
        case '*':
            cout << "Wynik: " << num1 << " * " << num2 << " = " << mnozenie(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Wynik: " << num1 << " / " << num2 << " = " << dzielenie(num1, num2) << endl;
            } else {
                cout << "Błąd! Dzielenie przez 0 nie jest możliwe." << endl;
                return -1;
            }
            break;
        default:
            cout << "Błąd! Nieznany operator. " << endl;
            return -1;
    }
    return 0;
}