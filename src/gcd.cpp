#include <Rcpp.h>
#include "gcd.h"

using namespace Rcpp;


//' Calculates the Greatest Common Divisor of two integers using the recursive
//' Euclidean algorithm.
//'
//' The recursive implementation of the greatest common divisor algorithm was
//' described in the Elements of Euclid but may even predate that.
//' @param a First integer
//' @param b Second integer
//' @return The greatest common divisor
//' @examples
//' gcd_recursive(24, 30)
//' gcd_recursive(9, 5)
//' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
//'   Introduction to algorithms (3rd ed., pp. 928-930, 934-935). Cambridge
//'   (Inglaterra): Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia,
//'   The Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int gcd_recursive(unsigned int a, unsigned int b) {

  return _gcd_recursive(a, b);
}

//' Calculates the Greatest Common Divisor using the Euclidean division
//' algorithm.
//'
//' The Euclidean division implementation of the greatest common divisor
//' algorithm computes a quotient \eqn{q_k} and a remainder \eqn{r_k} at each
//' step \eqn{k} from the two numbers \eqn{a} and \eqn{b}. The quotient component
//' of Euclidean division is not used in the algorithm, thus only modulo
//' operations are required as that only returns the remainder.
//' @param a First integer
//' @param b Second integer
//' @return The greatest common divisor
//' @examples
//' gcd_division(24, 30)
//' gcd_division(9, 5)
//' gcd_division(193752, 234574)
//' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
//'   Introduction to algorithms (3rd ed., pp. 928-930). Cambridge (Inglaterra):
//'   Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
//'    Euclidean division. (2017, May 10). In Wikipedia, The Free Encyclopedia.
//'   From
//'   https://en.wikipedia.org/w/index.php?title=Euclidean_division&oldid=779699188
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int gcd_division(unsigned int a, unsigned int b) {
  while (b != 0) {
    int x = b;
    b = fmod(a, b);
    a = x;
  }
  return a;
}


//' Computes the Greatest Common Divisor of two integers using the Euclidean subtraction algorithm.
//'
//' Computes the greatest common divisor using the original implementation of the algorithm by
//' Euclid. In this version of the algorithm, the quotient \eqn{q_k} and remainder \eqn{r_k}
//' is calculated by repeated division by subtraction. Therefore, in this implementation of the
//' greatest common divisor algorithm, the modulo operation in the division implementation is
//' replaced by division by repeated subtraction.
//'
//' @param a First integer
//' @param b Second integer
//' @return The greatest common divisor
//' @examples
//' gcd_subtraction(24, 30)
//' gcd_subtraction(9, 5)
//' gcd_subtraction(135614, 234562)
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
unsigned long int gcd_subtraction(unsigned int a, unsigned int b) {
  while (a != b) {
    if (a > b) {
      a = a - b;
    }
    else {
      b = b - a;
    }
  }
  return a;
}


//' Implementation of the extended form of the Euclidean algorithm which computes
//' the greatest common divisor \eqn{d} and integers \eqn{x} and \eqn{y} such
//' that \eqn{ax + by = d}.
//'
//' The extended Euclidean algorithm computes the greatest common divisor,
//' \eqn{d} of two integers \eqn{a} and \eqn{b} as well as the coefficients
//' \eqn{x} and \eqn{y} such that: \deqn{d = gcd(a, b) = ax + by} The
//' coefficients \eqn{x} and \eqn{y} are known as Bezout's coefficients and can
//' be zero or negative.
//'
//' @param a First integer
//' @param b Second integer
//' @examples
//' gcd.extended(99, 78)
//' @references Bezout's identity. (2017, May 12). In Wikipedia, The Free
//' Encyclopedia. From
//' https://en.wikipedia.org/w/index.php?title=B%C3%A9zout%27s_identity&oldid=780050687
//' Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009). Introduction to
//' algorithms (3rd ed., pp. 937-938). Cambridge (Inglaterra): Mit Press.
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector gcd_extended(unsigned int a, unsigned int b) {
  double d; double x; double y;

  if (b == 0) {
    NumericVector xx = NumericVector::create(a, 1, 0);
    return xx;
  }
  else {
    NumericVector g = gcd_extended(b, a % b);
    d = g[0];
    x = g[1];
    y = g[2];

    NumericVector h = NumericVector::create(d, y, x - (a / b) * y);

    d = h[0];
    x = h[1];
    y = h[2];
  }

  NumericVector gcd = NumericVector::create(d, x, y);
  return gcd;
}
