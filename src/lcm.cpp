#include <Rcpp.h>
#include <stdlib.h>
#include "gcd.h"

using namespace Rcpp;


//' Computes the least common multiple of two integers, a and b.
//' 
//' The least common multiple is defined as the smallest possible positive integer that 
//' is divisible by both \eqn{a} and \eqn{b}, and is usually denoted \eqn{lcm(a,b)} or 
//' \eqn{LCM(a,b)}. The function implementation for finding the least common multiple takes advantage 
//' of the relation between the greatest common divisor and the least common multiple, such that:
//' \deqn{lcm(a,b) = \bigg(\frac{|a|}{gcd(a,b)} \bigg) \space |b|}
//' @param a First integer
//' @param b Second integer
//' @examples
//' lcm(21, 6)
//' lcm(15, 3)
//' @return the least common multiple of the two given integers
// [[Rcpp::export]]
long int lcm(int a, int b) {
  
  return (abs(a) / _gcd_recursive(a, b)) * abs(b);
  
}
