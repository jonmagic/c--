// in Calculator.h

#ifndef Calculator_h
#define Calculator_h

#include <cstdint>
#include <cmath>

class Calculator
{
public:
  float add(float a = 1, float b = 2);
  float subtract(float a, float b);
  float square_root(float a3);
  bool boolean(float a, float b);
};

#endif
