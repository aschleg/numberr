#include <Rcpp.h>
#include <math.h>
#include "integers.h"

using namespace Rcpp;


//' Tests whether a given value n is prime with a naive test.
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
//' fermat_prime(31)
//' fermat_prime(100)
//' @references Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,
//' Clifford Stein (2001). "Section 31.8: Primality testing". Introduction to
//' Algorithms (Second ed.). MIT Press; McGraw-Hill. Weisstein, Eric W.
//' "Fermat's Little Theorem." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/FermatsLittleTheorem.html Weisstein, Eric W.
//' "Primality Test." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/PrimalityTest.html
//' @export
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


//' Performs the Lucas-Lehmer primality test for determining if a Mersenne
//' number is prime.
//'
//' The Lucas-Lehmer primality test is a deterministic (the test outputs with
//' absolute certainty the integer in question is prime) test for finding if a
//' Mersenne number, \eqn{M_p}, is prime. The Lucas-Lehmer test proceeds as
//' follows: The Mersenne number to test is denoted \eqn{M_p = 2^p - 1}.
//' Starting with \eqn{s_0 \equiv 4}, the recurrence relation \eqn{s_p \equiv
//' s^2_{p-1} - 2 \space (\text{mod} \space M_p)}, continues for \eqn{p-2}
//' iterations and if \eqn{s \equiv 0 \space (\text{mod} \space M_p)} then the
//' Mersenne number \eqn{M_p} is prime.
//'
//' @param n integer
//' @returns TRUE if integer is prime (and a Mersenne Number), FALSE otherwise
//' @examples
//' lucas_lehmer(13)
//' lucas_lehmer(31)
//' lucas_lehmer(127)
//' @references Lucas–Lehmer primality test. (2017, May 27). In Wikipedia, The
//' Free Encyclopedia. From
//' https://en.wikipedia.org/w/index.php?title=Lucas%E2%80%93Lehmer_primality_test&oldid=782483346
//' Weisstein, Eric W. "Lucas-Lehmer Test." From MathWorld--A Wolfram Web
//' Resource. http://mathworld.wolfram.com/Lucas-LehmerTest.html Weisstein, Eric
//' W. "Mersenne Number." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/MersenneNumber.html Weisstein, Eric W.
//' "Primality Test." From MathWorld--A Wolfram Web Resource.
//' http://mathworld.wolfram.com/PrimalityTest.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
bool lucas_lehmer(unsigned int p) {
  int s = 4;
  int m = pow(2, p) - 1;

  for (unsigned int i = 1; i <= p - 2; i++) {
    s = fmod(s * s - 2, m);
  }

  if (s == 0) {
    return true;
  }
  else {
    return false;
  }
}
