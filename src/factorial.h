#ifndef __FACTORIAL__
#define __FACTORIAL__

inline double _factorial(int n) {
  double fac = 1;
  
  for(int i = n - 1; i >= 1; i--) {
    fac *= i;
  }
  
  return fac;
}

#endif