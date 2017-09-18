#include <Rcpp.h>
#include <math.h>
#include "isprime.h"

using namespace Rcpp;


//' Tests whether a given value n is prime
//'
//' A prime number is defined as a positive integer, \eqn{n > 1} that has no
//' positive divisors other than 1 and itself.
//'
//' @param n Value to test
//' @return TRUE if n is prime, FALSE otherwise
//' @examples
//' isprime(9)
//' isprime(3)
//' isprime(10927)
//' @references Weisstein, Eric W. "Prime Number." From MathWorld--A Wolfram Web
//' Resource. http://mathworld.wolfram.com/PrimeNumber.html
//' @export
// [[Rcpp::export]]
bool isprime(int n) {
  return _isprime(n);
}


// [[Rcpp::export]]
bool lucas_lehmer(int n) {
  int s = 4;
  int m = pow(2, n) - 1;

  for (int i = 1; i <= n - 2; ++i) {
    s = fmod(s * s - 2, m);
  }

  if (s == 0) {
    return true;
  }
  else {
    return false;
  }
}
