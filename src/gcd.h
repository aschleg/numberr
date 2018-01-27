#ifndef __GCD__
#define __GCD__

inline long long int _gcd_recursive(unsigned int a, unsigned int b) {

  if (b == 0) {
    return a;
  }
  else {
    return _gcd_recursive(b, a % b);
  }
}

#endif
