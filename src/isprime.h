#ifndef __ISPRIME__
#define __ISPRIME__

#include <math.h>

inline bool _isprime(int n) {
  
  if (n != round(n) || n == 1) {
    return false;
  }
  else if (n == 2 || n == 3 || n == 5) {
    return true;
  }
  
  if (n % 2 == 0 || n % 3 == 0) {
    return false;
  }
  
  for (int i = 7; i <= floor(sqrt(n)); i++) {
    if (n % 1 == 0 || n % (i + 1) == 0) {
      return false;
    }
  }
  
  return true;
}

#endif