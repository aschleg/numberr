#include <Rcpp.h>
#include "integers.h"

using namespace Rcpp;


//' Tests whether a given value \eqn{n} is composite. Essentially the opposite of
//' the isprime() function.
//'
//' A composite number is defined as a positive integer :math:`n` that has a
//' factor than 1 and itself. In short, a composite number is not prime.
//'
//' @param n Value to test
//' @return TRUE if n is composite, FALSE otherwise
//' @examples
//' iscomposite(9)
//' iscomposite(3)
//' iscomposite(10927)
//' @references Weisstein, Eric W. "Composite Number." From MathWorld--A Wolfram
//' Web Resource. http://mathworld.wolfram.com/CompositeNumber.html
//' @export
// [[Rcpp::export]]
bool iscomposite(int n) {
  return _iscomposite(n);
}


//' Tests if two integers are coprime.
//'
//' Two integers \eqn{a} and \eqn{b} are said to be relatively prime (also called
//' relatively prime) if they share no positive divisors except 1.
//'
//' @param a First integer
//' @param b Second integer
//' @return TRUE if given integers are coprime, FALSE otherwise
//' @examples
//' iscoprime(2, 4)
//' iscoprime(2, 3)
//' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
//' Introduction to algorithms (3rd ed., pp. 931). Cambridge (Inglaterra): Mit
//' Press. Weisstein, Eric W. "Relatively Prime." From MathWorld--A Wolfram Web
//' Resource. http://mathworld.wolfram.com/RelativelyPrime.html
//' @export
// [[Rcpp::export]]
bool iscoprime(int a, int b) {
  return _iscoprime(a, b);
}


//' Tests if a given value \eqn{n} is even or not.
//'
//' An even number is defined as an integer with the form \eqn{n = 2k} where
//' \eqn{k} is also an integer. Put differently, an even number is not odd and is
//' thus evenly divisible by 2.
//'
//' @param n Value to test
//' @return TRUE if n is even, FALSE otherwise
//' @examples
//' iseven(5)
//' iseven(4)
//' iseven(4.23)
//' @references Weisstein, Eric W. "Even Number." From MathWorld--A Wolfram Web
//' Resource. http://mathworld.wolfram.com/EvenNumber.html
//' @export
// [[Rcpp::export]]
bool iseven(int n) {
  return _iseven(n);
}


//' Tests whether a given given value n is odd.
//'
//' An odd number is an integer that has the form \eqn{n = 2k + 1} for an integer
//' \eqn{k}. In other words, an odd number is an integer that is not evenly
//' divisible by 2.
//'
//' @param n Value to test
//' @return TRUE if n is odd, FALSE otherwise
//' @examples
//' isodd(5)
//' isodd(4)
//' isodd(5.25)
//' @references Weisstein, Eric W. "Odd Number." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/OddNumber.html
//' @export
// [[Rcpp::export]]
bool isodd(int n) {
  return _isodd(n);
}


//' Tests if a given integer is a square number.
//'
//' A square number is an integer that is the square of an integer.
//'
//' @param n Value to test
//' @return TRUE if value is a square number, FALSE otherwise
//' @examples
//' issquare(25)
//' issquare(9)
//' issquare(3)
//' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
//' Corvallis, OR: Department of Physics, Oregon State University.
//' @export
// [[Rcpp::export]]
bool issquare(int n) {
  return _issquare(n);
}
