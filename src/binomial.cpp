#include <Rcpp.h>
#include <algorithm>
#include <string>
#include "binomial.h"

using namespace Rcpp;


//' Calculates the binomial coefficient with several different algorithm methods
//' available.
//'
//' The binomial coefficient equation (in compact form) is defined as:
//' \deqn{\binom{n}{k} = \frac{n!}{k!(n-k)!} \qquad 0 \leq k \leq n}
//'
//' The multiplicative method for computing the binomial coefficient is more
//' efficient than the compact form calculation and is defined as:
//' \deqn{\binom{n}{k} = \frac{n(n-1)(n-2) \cdots (n-(k-1))}{k(k-1)(k-2) \cdots
//' 1} = \prod^k_{i=1} \frac{n + 1 - i}{i}}
//'
//' The recursive method of the binomial coefficient calculation is defined as:
//' \deqn{\binom{n}{k} = \binom{n - 1}{n - k} + binom{n - 1}{k} \qquad for n, k:
//' 1 \leq k \leq n - 1} With boundary values: \deqn{\binom{n}{0} = \binom{n}{n}
//' = 1}
//'
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @param method selects the algorithm to use for calculating the binomial
//'   coefficient. Options include the multiplicative (default), recursive, or
//'   factorial methods. Please note the recursive method can be much slower than
//'   the other two choices.
//' @return The binomial coefficient
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https:#en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http:#www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http:#mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int binomial_coefficient(unsigned int n, unsigned int k, std::string method = "multiplicative") {

  long int bc;

  if (method == "factorial") {
    bc = _binomial_factorial(n, k);
  }
  else if (method == "recursive") {
    bc = _binomial_recursive(n, k);
  }
  else {
    bc = _binomial_multiplicative(n, k);
  }

  return bc;
}

//' Calculates the binomial coefficient using a recursive method.
//'
//' The recursive method of the binomial coefficient calculation is defined as:
//' \deqn{\binom{n}{k} = \binom{n - 1}{n - k} + binom{n - 1}{k} \qquad for n, k:
//' 1 \leq k \leq n - 1} With boundary values: \deqn{\binom{n}{0} = \binom{n}{n}
//' = 1}
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @return The binomial coefficient
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int binomial_recursive(unsigned int n, unsigned int k) {
  return _binomial_recursive(n, k);
}


//' Calculates the binomial coefficient using the multiplicative equation.
//'
//' The multiplicative method for computing the binomial coefficient is more
//' efficient than the compact form calculation and is defined as:
//' \deqn{\binom{n}{k} = \frac{n(n-1)(n-2) \cdots (n-(k-1))}{k(k-1)(k-2) \cdots
//' 1} = \prod^k_{i=1} \frac{n + 1 - i}{i}}
//'
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @return The binomial coefficient
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int binomial_multiplicative(unsigned int n, unsigned int k) {
  return _binomial_multiplicative(n, k);
}


//' Calculates the binomial coefficient using the factorial method.
//'
//' The binomial coefficient equation (in compact form) is defined as:
//' \deqn{\binom{n}{k} = \frac{n!}{k!(n-k)!} \qquad 0 \leq k \leq n}
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @return The binomial coefficient
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int binomial_factorial(unsigned int n, unsigned int k) {

  return _binomial_factorial(n, k);
}
