#include <Rcpp.h>
#include <algorithm>
#include "factorial.h"

using namespace Rcpp;

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
// [[Rcpp::export]]
int binomial_recursive(int n, int k) {
  if (k == n || k == 0) {
    return 1;
  }
  else {
    return binomial_recursive(n - 1, k - 1) + binomial_recursive(n - 1, k);
  }
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
//' @examples
//' binomial.coefficient.multiplicative(10, 5)
//' binomial.coefficient.multiplicative(20, 10)
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::export]]
int binomial_multiplicative(int n, int k) {

  int bico = 1;
  int nk = std::min(n, n - k);
  int j = 1;

  for(int c = 1; c <= nk; c++) {
    bico = bico * (n + 1 - j) / j;
    j += 1;
  }

  return bico;
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
// [[Rcpp::export]]
int binomial_factorial(int n, int k) {
  int nk = std::min(n, n - k);
  int bico = _factorial(n) / (_factorial(k) * _factorial(nk));

  return bico;
}
