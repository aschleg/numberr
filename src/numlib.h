#include <math.h>
#include <stdio.h>

#ifndef __MODEXPO__
#define __MODEXPO__

inline int modular_exponentiation(int a, unsigned int n, int m) {
  
  if (m == 1) {
    return 0;
  }
  
  int res = 1;
  
  a = a % m;
    
  while (n > 0) {
    
    if (n & 1) {
      res = (res * a) % m;
    }
    
    n = n >> 1;
    a = (a * a) % m;
  }
  
  return res;
  
}

#endif
