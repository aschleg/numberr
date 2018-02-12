#include <Rcpp.h>
#include "numlib.h"

using namespace Rcpp;


//' Computes large modular exponents with modular exponentiation.
//' 
//' @param a the base integer, as in a^n mod m
//' @param n the exponent power
//' @param m the modulus
//' @return the computed exponent mod m
//' @export
// [[Rcpp::export]]
int mod_expo(int a, unsigned int n, int m) {
  return modular_exponentiation(a, n, m);
}
