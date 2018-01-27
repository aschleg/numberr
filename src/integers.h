#include <math.h>
#include "gcd.h"


#ifndef __ISCOPRIME__
#define __ISCOPRIME__

inline bool _iscoprime(unsigned int a, unsigned int b) {
  if (_gcd_recursive(a, b) == 1) {
    return true;
  }
  return false;
}

#endif


#ifndef __ISODD__
#define __ISODD__

inline bool _isodd(unsigned int n) {
  if (n != round(n)) {
    return false;
  }
  if (n % 2 == 0) {
    return false;
  }
  
  return true;
}

#endif


#ifndef __ISEVEN__
#define __ISEVEN__

inline bool _iseven(unsigned int n) {
  if (n != round(n)) {
    return false;
  }
  
  if (_isodd(n) == true) {
    return false;
  }
  
  return true;
}

#endif


#ifndef __ISPRIME__
#define __ISPRIME__

inline bool _isprime(unsigned int n) {
  
  if (_iseven(n) == true) {
    return false;
  }
  
  if (n != round(n) || n == 1) {
    return false;
  }
  
  else if (n == 2 || n == 3) {
    return true;
  }
  
  if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
    return false;
  }
  
  for (unsigned int i = 7; i < floor(sqrt(n)); i += 2) {
    if (n % i == 0 || n % (i + 1) == 0) {
      return false;
    }
  }
  
  return true;
}

#endif


#ifndef __ISCOMPOSITE__
#define __ISCOMPOSITE__

inline bool _iscomposite(unsigned int n) {
  if (_isprime(n) == true) {
    return false;
  }
  return true;
}

#endif


#ifndef __ISSQUARE__
#define __ISSQUARE__

inline bool _issquare(unsigned int n) {
  
  long s = sqrt(n);
  long p = pow(s, 2);
  
  if (p == n) {
    return true;
  }
  return false;
}

#endif
