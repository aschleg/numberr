#include <Rcpp.h>
#include <vector>
#include <algorithm>
#include "factorial.h"
#include "binomial.h"
#include "integers.h"

using namespace Rcpp;

//' Returns the Catalan numbers up to n.
//'
//' The Catalan numbers are a sequence of natural numbers, typically denoted
//' \eqn{C_n} where \eqn{n} is the \eqn{n^{th}} Catalan number. The solution to
//' Euler's Polygon Division Problem, which is the problem of finding the number
//' of triangles that can be divided from a polygon of \eqn{n} segments, where
//' the number of triangles is \eqn{E_n}, is the Catalan number \eqn{C_{n-2}}.
//' The first few Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, ... The
//' function is implemented using the recurrence relation of \eqn{C_n}:
//' \deqn{C_{n+1} = \frac{2(2n + 1)}{n + 2} C_n}
//'
//' @param n Specify the length of the returned Catalan number sequence.
//' @return vector of n length
//' @examples
//' catalan(5)
//' catalan(10)
//' @references Catalan number. (2018, January 18). In Wikipedia, The Free
//'   Encyclopedia. Retrieved 14:03, January 27, 2018, from
//'   https://en.wikipedia.org/w/index.php?title=Catalan_number&oldid=821121794
//'   Weisstein, Eric W. "Euler's Polygon Division Problem." From MathWorld--A
//'   Wolfram Web Resource.
//'   http://mathworld.wolfram.com/EulersPolygonDivisionProblem.html Stanley,
//'   Richard and Weisstein, Eric W. "Catalan Number." From MathWorld--A Wolfram
//'   Web Resource. http://mathworld.wolfram.com/CatalanNumber.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector catalan(unsigned int n) {
  std::vector<unsigned long int> x(n);

  x[0] = 1;

  double j = 1.0;
  for (unsigned int i = 1; i <= x.size(); i++) {
    x[i] = (2.0 * (2.0 * j + 1.0)) / (j + 2.0) * x[j - 1.0];
    j++;
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1;
}


//' Returns the Cullen number integer sequence up to a given value of n.
//'
//' Cullen numbers are a special case of Proth numbers that have the form:
//' \deqn{C_n = 2^n n + 1} The first few Cullen numbers are 3, 9, 25, 65, 161,
//' ...
//'
//' @param n Specifies the length of the Cullen number sequence to return
//' @return vector of length n
//' @examples
//' cullen(5)
//' cullen(10)
//' @references Cullen number. (2018, January 22). In Wikipedia, The Free
//'   Encyclopedia. Retrieved 14:17, January 27, 2018, from
//'   https://en.wikipedia.org/w/index.php?title=Cullen_number&oldid=821774732
//'   Weisstein, Eric W. "Cullen Number." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/CullenNumber.html
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector cullen(unsigned int n) {
  std::vector<unsigned long int> x(n);

  x[0] = 0;

  double j = 1.0;

  for (unsigned int i = 1; i <= x.size(); i++) {
    x[i] = pow(2, j) * j + 1;
    j++;
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1[x1 > 0];
}


//' Returns the super-Catalan number sequence up to the given value of n.
//'
//' The super-Catalan numbers, also known as the Schroeder-Hipparchus numbers,
//' or little Schroeder numbers, count the number of lattice paths (path
//' composed of a connected horizontal and vertical line segment) with diagonal
//' steps from \eqn{n, n} to \eqn{0, 0} without crossing the diagonal line. The 
//' super-Catalan numbers are given by the recurrence relation:
//' \deqn{S(n) = \frac{3(2n - 3) \space S(n-1) - (n-3) \space S(n-2)}{n}}
//'
//' @param n Specifies the length of the returned super-Catalan number sequence
//' @return vector of length n
//' @examples
//' supercatalan(3)
//' supercatalan(8)
//' @references Schröder–Hipparchus number. (2016, December 2). In Wikipedia,
//'   The Free Encyclopedia. Retrieved 14:24, January 27, 2018, from
//'   https://en.wikipedia.org/w/index.php?title=Schr%C3%B6der%E2%80%93Hipparchus_number&oldid=752625057
//'    Weisstein, Eric W. "Lattice Path." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/LatticePath.html Weisstein, Eric W.
//'   "Super Catalan Number." From MathWorld--A Wolfram Web Resource.
//'   http://mathworld.wolfram.com/SuperCatalanNumber.html
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector supercatalan(unsigned int n) {
  std::vector<unsigned long int> x(n + 1);
  x[0] = 1; x[1] = 1;

  double j = 3.0;
  for (unsigned int i = 2; i <= x.size(); i++) {
    x[i] = (3.0 * (2.0 * j - 3.0) * x[j - 2.0] - (j - 3.0) * x[j - 3.0]) / j;

    j++;
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1[x1 > 0.0];
}


//' Computes the Fibonacci sequence up to given value of n.
//'
//' The Fibonacci sequence is defined by a recurrence relation where \eqn{f_n}
//' denotes the series up to \eqn{n} points. \deqn{f_n = f_{n-1} + f_{n-2}}
//' With initial coniditions: \deqn{f_1 = 1, \qquad f_2 = 2}
//' @param n Integer designating the stopping point of the Fibonacci sequence
//' @param output If 'last', the last integer in the Fibonacci sequence up to n
//'   is returned, if 'array', the entire sequence is returned. Defaults to
//'   'last'.
//' @return array of the Fibonacci sequence up to \eqn{n}.
//' @examples
//' fibonacci(10)
//' fibonacci(10, 'array')
//' @references Moler, C. (2011). Numerical computing with MATLAB (1st ed.).
//' Philadelphia, Pa: Society for Industrial & Applied Mathematics.
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector fibonacci(unsigned long int n) {
  std::vector<unsigned long int> x(n);

  x[0] = 1;
  x[1] = 1;

  for (unsigned int i = 2; i <= x.size(); i++) {
    x[i] = x[i - 1] + x[i - 2];
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1;
}


//' Computes the famous \eqn{3n + 1} sequence, also known as the Collatz
//' conjecture.
//'
//' The Collatz conjecture, also known as the \eqn{3n + 1} problem, is a
//' currently unsolved problem in number theory that is stated as: Start with a
//' positive integer \eqn{n} If \eqn{n} is even, divide \eqn{n} by 2 If \eqn{n}
//' is odd, multiply by 3 and add 1 to obtain \eqn{3n + 1} Repeat this process
//' until the sequence reaches 1. It is unknown if there is a starting integer
//' \eqn{n} that does not result in the sequence ending with 1.
//'
//' @param n Starting integer to begin \eqn{3n + 1} process
//' @return vector containing sequence generated by the Collatz conjecture. If n
//'   is 1, 1 is returned.
//' @examples
//' three_n_one(7)
//' three_n_one(10)
//' @references 3x + 1 problem. (2017, May 13). In Wikipedia, The Free
//' Encyclopedia. from
//' https://en.wikipedia.org/w/index.php?title=3x_%2B_1_problem&oldid=780191927
//' Moler, C. (2011). Numerical computing with MATLAB (1st ed.). Philadelphia,
//' Pa: Society for Industrial & Applied Mathematics.
//' @export
// [[Rcpp::interfaces(r, cpp)]]
// [[Rcpp::export]]
NumericVector three_n_one(unsigned int n) {
  std::vector<unsigned long int> x(n);

  if (n == 1) {
    x.resize(1);
    x[0] = 1;
    NumericVector x1 = Rcpp::wrap(x);
    return x1;
  }

  unsigned int i = 0;

  do {
    if (_iseven(n) == true) {
      n = n / 2;
    }
    else {
      n = 3 * n + 1;
    }

    x[i] = n;
    i = i + 1;

    if (i > x.size()) {
      x.resize(i + 1);
    }

  } while (n > 1);

  if (x.size() >= i) {
    x.resize(i);
  }

  NumericVector x1 = Rcpp::wrap(x);
  return x1;
}
