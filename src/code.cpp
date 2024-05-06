#include "code.hpp"

double dodawanie(double num1, double num2) {
    return num1 + num2;
}

double odejmowanie(double num1, double num2) {
    return num1 - num2;
}

double mnozenie(double num1, double num2) {
    return num1 * num2;
}

double dzielenie(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        throw "Błąd! Dzielenie przez 0 nie jest możliwe.";
    }
}
