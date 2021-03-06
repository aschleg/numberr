#include <Rcpp.h>
#include <math.h>
#include <cstdlib>
#include <algorithm>
#include "integers.h"
#include "numlib.h"
#include <random>

using namespace Rcpp;

// [[Rcpp::plugins("cpp11")]]

//' Tests whether a given value n is prime with a naive test.
//'
//' A prime number is defined as a positive integer, \eqn{n > 1} that has no
//' positive divisors other than 1 and itself.
//'
//' @param n Value to test
//' @return TRUE if n is prime, FALSE otherwise
//' @examples
//' isprime(9)
//' isprime(11)
//' @references Weisstein, Eric W. "Prime Number." From MathWorld--A Wolfram Web
//' Resource. http://mathworld.wolfram.com/PrimeNumber.html
//' @export
// [[Rcpp::export]]
bool isprime(int n) {
  return _isprime(n);
}


//' Tests if an integer is (probably) prime using the Fermat primality test.
//'
//' Fermat's primality test is a probabilistic method (there is a chance, albeit
//' very small, that a composite number will be flagged as prime) for
//' identifying prime numbers. The test is based on Fermat's Little Theorem,
//' which states that if \eqn{p} is prime and \eqn{a_{p-1}} is not divisible by
//' \eqn{p}, then:
//'
//' \deqn{a^{p-1} \equiv 1 \space (text{mod} \space p)}
//'
//' The test proceeds as follows: Select a value for \eqn{a} at random that is
//' not divisible by \eqn{p} and check if the equality holds. This test is
//' performed \eqn{k} times and if the equality does not hold, the integer
//' \eqn{p} is composite. It is possible the test will falsely identify a
//' composite number as prime.
//'
//' @param n integer
//' @param k integer, default 1000
//' @return TRUE if n is probably prime, FALSE otherwise
//' @examples
//' fermat_prime(11)
//' fermat_prime(221)
//' @references Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,
//' Clifford Stein (2001). "Section 31.8: Primality testing". Introduction to
//' Algorithms (Second ed.). MIT Press; McGraw-Hill. Weisstein, Eric W.
//' "Fermat's Little Theorem." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/FermatsLittleTheorem.html Weisstein, Eric W.
//' "Primality Test." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/PrimalityTest.html
//' @export
// [[Rcpp::export]]
bool fermat_prime(unsigned int n, int k = 1000) {
  int M = 2;
  int N = n - 2;
  
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<int> uni_dist(M, N);
  
  for (int i = 0; i <= k; i++) {
    int a = uni_dist(mt);
    
    if (modular_exponentiation(a, n - 1, n) != 1) {
      return false;
    }
  }
  
  return true;
}


//' Performs the Lucas-Lehmer primality test for determining if a Mersenne
//' number is prime.
//'
//' @param p integer
//' @return TRUE if integer is prime (and a Mersenne Number), FALSE otherwise
//' @references Weisstein, Eric W. "Lucas-Lehmer Test." From MathWorld--A
//'   Wolfram Web Resource. 
//'   http://mathworld.wolfram.com/Lucas-LehmerTest.html
//'   
//'   Weisstein, Eric W. "Mersenne Number." From MathWorld--A Wolfram Web
//'   Resource. 
//'   http://mathworld.wolfram.com/MersenneNumber.html
//'   
//'   Weisstein, Eric W. "Primality Test." From MathWorld--A Wolfram Web Resource.
//'   http://mathworld.wolfram.com/PrimalityTest.html
//' @export
// [[Rcpp::export]]
bool lucas_lehmer(int p) {
  int s = 4;
  int m = pow(2, p) - 1;

  for (int i = 0; i <= p - 2; i++) {
    s = fmod(s * s - 2, m);
  }

  if (s == 0) {
    return true;
  }
  else {
    return false;
  }
}
