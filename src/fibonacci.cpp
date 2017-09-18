#include <Rcpp.h>
using namespace Rcpp;


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
// [[Rcpp::export]]
NumericVector fibonacci(int n) {
  NumericVector x(n + 2);
  x[0] = 0;
  x[1] = 1;

  for (int i = 2; i <= x.size(); i++) {
    x[i] = x[i - 1] + x[i - 2];
  }

  return x;
}
