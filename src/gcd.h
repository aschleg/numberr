#ifndef __GCD__
#define __GCD__

inline int _gcd_recursive(int a, int b) {
  
  if (b == 0) {
    return a;
  }
  else {
    return _gcd_recursive(b, a % b);
  }
}

#endif