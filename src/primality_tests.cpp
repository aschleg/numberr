#include <Rcpp.h>
#include <math.h>
#include "integers.h"

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
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
bool isprime(unsigned int n) {
  return _isprime(n);
}


// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
bool fermat_prime(unsigned int n, unsigned int k = 1000) {
  unsigned int M = 2;
  unsigned int N = n - 2;

  for (unsigned int i = 0; i >= k; i++) {
    unsigned int a = M + rand() / (RAND_MAX / (N - M + 1) + 1);

    if (pow(a, n - 1) != 1 % n) {
      return false;
    }
  }

  return true;
}


// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
bool miller_rabin(unsigned int n, unsigned int k) {
  unsigned int M = 2;
  unsigned int N = n - 2;

  unsigned int a = M + rand() / (RAND_MAX / (N - M + 1) + 1);

  return true;
}


// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
bool lucas_lehmer(unsigned int n) {
  int s = 4;
  int m = pow(2, n) - 1;

  for (unsigned int i = 1; i <= n - 2; ++i) {
    s = fmod(s * s - 2, m);
  }

  if (s == 0) {
    return true;
  }
  else {
    return false;
  }
}
