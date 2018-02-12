#include <Rcpp.h>
#include <math.h>
#include <vector>
#include "integers.h"

using namespace Rcpp;

#ifndef __TRIALFACTOR__
#define __TRIALFACTOR__

inline NumericVector _factor_trial(int n) {
  std::vector<int> x(ceil(sqrt(n)));

  if (n == 3 || n == 2 || n == 1) {
    x.resize(2);
    x[0] = 1; x[1] = n;
    NumericVector x1 = Rcpp::wrap(x);
    return x1;
  }

  float div = 2.0;
  int i = 0;

  if (fmod(n, div) == 0) {
    x[i] = div;
    n = n / div;
    i = i + 1;
  }

  div += 1;

  do {
    if (fmod(n, div) == 0) {
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