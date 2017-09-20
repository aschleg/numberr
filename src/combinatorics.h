
#ifndef __FACTORIAL__
#define __FACTORIAL__

inline unsigned long int _factorial(unsigned long int n) {
  unsigned long int fac = 1;

  for(long int i = n; i >= 1; i--) {
    fac = fac * i;
  }

  return fac;
}

#endif


#ifndef __BINOMIALFACTORIAL__
#define __BINOMIALFACTORIAL__

inline int _binomial_factorial(int n, int k) {
  int nk = std::min(n, n - k);
  int bico = _factorial(n) / (_factorial(k) * _factorial(nk));

  return bico;
}

#endif


#ifndef __BINOMIALMULTIPLICATIVE__
#define __BINOMIALMULTIPLICATIVE__

inline int _binomial_multiplicative(int n, int k) {

  int bico = 1;
  int nk = std::min(n, n - k);
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

inline int _binomial_recursive(int n, int k) {
  if (k == n || k == 0) {
    return 1;
  }
  else {
    return _binomial_recursive(n - 1, k - 1) + _binomial_recursive(n - 1, k);
  }
}

#endif
