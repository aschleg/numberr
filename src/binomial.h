#define _USE_MATH_DEFINES
#include <math.h>
#include "factorial.h"

#ifndef __BINOMIALFACTORIAL__
#define __BINOMIALFACTORIAL__

inline long int _binomial_factorial(unsigned int n, unsigned int k) {
  int nk = std::min(n, n - k);
  int bico = _factorial(n) / (_factorial(k) * _factorial(nk));

  return bico;
}

#endif


#ifndef __BINOMIALMULTIPLICATIVE__
#define __BINOMIALMULTIPLICATIVE__

inline long int _binomial_multiplicative(unsigned int n, unsigned int k) {

  unsigned int bico = 1;
  unsigned int nk = std::min(n, n - k);
  unsigned int j = 1;

  for(unsigned int c = 1; c <= nk; c++) {
    bico = bico * (n + 1 - j) / j;
    j += 1;
  }

  return bico;
}

#endif


#ifndef __BINOMIALRECURSIVE__
#define __BINOMIALRECURSIVE__

inline long int _binomial_recursive(unsigned int n, unsigned int k) {
  if (k == n || k == 0) {
    return 1;
  }
  else {
    return _binomial_recursive(n - 1, k - 1) + _binomial_recursive(n - 1, k);
  }
}

#endif
