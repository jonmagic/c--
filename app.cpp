// hello.cpp
#include "Calculator.h"
#include <iostream>

using namespace std;

int main() {
  Calculator calculator;
  cout << "1 + 2 = " << calculator.add() << endl;
  cout << "2 - 1 = " << calculator.subtract(2, 1) << endl;
  cout << "sqrt 9 = " << calculator.square_root(9) << endl;
  cout << "1 == 2:  " << calculator.boolean(1, 2) << endl;
  return 0;
}
