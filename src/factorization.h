#include <Rcpp.h>
#include <math.h>
#include <vector>
#include "integers.h"

using namespace Rcpp;

#ifndef __TRIALFACTOR__
#define __TRIALFACTOR__

inline NumericVector _factor_trial(unsigned int n) {
  std::vector<unsigned int> x(ceil(sqrt(n)));

  if (n < 2 || _isprime(n) == true) {
    x.resize(2);
    x[0] = 1; x[1] = n;
    NumericVector x1 = Rcpp::wrap(x);
    return x1;
  }

  unsigned long div = 2.0;
  unsigned int i = 0;

  if (n % div == 0) {
    x[i] = div;
    n = n / div;
    i = i + 1;
  }

  div += 1;

  do {
    if (n % div == 0) {
      x[i] = div;
      n = n / div;
      i = i + 1;
    }
    else {
      div += 2;
    }
  } while (n > 1 && div <= sqrt(n));

  if (n > 1) {
    x[i] = n;
  }

  if (x.size() >= i) {
    x.resize(i + 1);
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1;
}

#endif
