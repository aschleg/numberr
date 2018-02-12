#define _USE_MATH_DEFINES
#include <math.h>
#include "factorial.h"

#ifndef __BINOMIALFACTORIAL__
#define __BINOMIALFACTORIAL__

inline long int _binomial_factorial(int n, int k) {
  long int nk = std::min(n, n - k);
  long int bico = _ramanujan(n) / (_ramanujan(k) * _ramanujan(nk));

  return bico + 1;
}

#endif


#ifndef __BINOMIALMULTIPLICATIVE__
#define __BINOMIALMULTIPLICATIVE__

inline long int _binomial_multiplicative(int n, int k) {

  long int bico = 1;
  long int nk = std::min(n, n - k);
  int j = 1;

  for(int c = 1; c <= nk; c++) {
    bico = bico * (n + 1 - j) / j;
    j += 1;
  }

  return bico;
}

#endif


#ifndef __BINOMIALRECURSIVE__
#define __BINOMIALRECURSIVE__

inline long int _binomial_recursive(int n, int k) {
  if (k == n || k == 0) {
    return 1;
  }
  else {
    return _binomial_recursive(n - 1, k - 1) + _binomial_recursive(n - 1, k);
  }
}

#endif