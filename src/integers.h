#include <math.h>
#include "isprime.h"
#include "gcd.h"


#ifndef __ISCOMPOSITE__
#define __ISCOMPOSITE__

inline bool _iscomposite(int n) {
  if (_isprime(n) == true) {
    return false;
  }
  return true;
}

#endif


#ifndef __ISCOPRIME__
#define __ISCOPRIME__

inline bool _iscoprime(int a, int b) {
  if (_gcd_recursive(a, b) == 1) {
    return true;
  }
  return false;
}

#endif


#ifndef __ISODD__
#define __ISODD__

inline bool _isodd(int n) {
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

inline bool _iseven(int n) {
  if (n != round(n)) {
    return false;
  }
  
  if (_isodd(n) == true) {
    return false;
  }
  
  return true;
}

#endif


#ifndef __ISSQUARE__
#define __ISSQUARE__

inline bool _issquare(int n) {
  
  long s = sqrt(n);
  long p = pow(s, 2);
  
  if (p == n) {
    return true;
  }
  return false;
}

#endif