#include <Rcpp.h>
#include "numlib.h"

using namespace Rcpp;


// [[Rcpp::export]]
int mod_expo(int a, unsigned int n, int m) {
  return modular_exponentiation(a, n, m);
}
