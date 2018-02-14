#include <Rcpp.h>
#include <algorithm>
#include <string>
#include "binomial.h"

using namespace Rcpp;


//' Calculates the binomial coefficient with several different algorithm methods
//' available.
//' 
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @param method selects the algorithm to use for calculating the binomial
//'   coefficient. Options include the multiplicative (default), recursive, or
//'   factorial methods. Please note the recursive method can be very slow and
//'   is not recommended over other algorithms.
//' @return The binomial coefficient
//' @examples
//' binomial_coefficient(5, 3)
//' binomial_coefficient(6, 4, 'factorial')
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https:#en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http:#www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http:#mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::export]]
long int binomial_coefficient(int n, int k, std::string method = "multiplicative") {

  if (method == "factorial") {
    return _binomial_factorial(n, k);
  }
  else if (method == "recursive") {
    return _binomial_recursive(n, k);
  }
  else {
    return _binomial_multiplicative(n, k);
  }

}


//' Calculates the binomial coefficient using a recursive method.
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
// [[Rcpp::export]]
long int binomial_recursive(int n, int k) {
  return _binomial_recursive(n, k);
}


//' Calculates the binomial coefficient using the multiplicative equation.
//'
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @return The binomial coefficient
//' @examples
//' binomial_multiplicative(5, 3)
//' binomial_multiplicative(4, 2)
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::export]]
long int binomial_multiplicative(int n, int k) {
  return _binomial_multiplicative(n, k);
}

//' Calculates the binomial coefficient using the factorial method.
//' 
//' @param n Number of possibilities
//' @param k number of unordered outcomes
//' @return The binomial coefficient
//' @examples
//' binomial_factorial(4, 2)
//' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
//'    Binomial coefficients. Encyclopedia of Mathematics. From
//'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
//'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
//' @export
// [[Rcpp::export]]
long int binomial_factorial(int n, int k) {

  return _binomial_factorial(n, k);
}
