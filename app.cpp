// hello.cpp
#include "Calculator.h"
#include <iostream>

using namespace std;

int main() {
  Calculator calculator;
  cout << "1 + 2 = " << calculator.add(1, 2) << endl;
  cout << "2 - 1 = " << calculator.subtract(2, 1) << endl;
  return 0;
}
