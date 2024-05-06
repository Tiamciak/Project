#include "../src/code.hpp"

#include <iostream>

int main() {

  if (dodawanie(0, 0) != 0){
    std::cerr << "Błąd: 0 + 0 != 0" << std::endl;
    return 1;
  }
    if (odejmowanie(10, 5) != 5){
    std::cerr << "Błąd: 10 - 5 != 5" << std::endl;
    return 1;
  }
    if (mnozenie(2, 2) != 4){
    std::cerr << "Błąd: 2 * 2 != 4" << std::endl;
    return 1;
  }
    if (dzielenie(4, 2) != 2){
    std::cerr << "Błąd: 4 / 2 != 2" << std::endl;
    return 1;
  }
  std::cout << "Jest git!" << std::endl;
  return 0;
}
