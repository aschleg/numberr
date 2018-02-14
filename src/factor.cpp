#include <Rcpp.h>
#include <cmath>
#include <vector>
#include "integers.h"
#include "factorization.h"
#include "gcd.h"

using namespace Rcpp;


//' Computes the factors of an integer, should they exist, using the trial
//' division method.
//'
//' Integer factorization by trial division is the most inefficient algorithm for
//' decomposing a composite number. Trial division is the method of testing if
//' \eqn{n} is divisible by a smaller number, beginning with 2 and proceeding
//' upwards. This order is used to eliminate the need to test for multiples of 2
//' and 3. Also, the trial factors never need to go further than the square root
//' of \eqn{n}, \eqn{\sqrt{n}}, due to the fact that if \eqn{n} has a factor,
//' there exists a factor \eqn{f \leq \sqrt{n}}.
//'
//' @param n Integer to be factored into product of smaller integers.
//' @return Vector containing the factors of \eqn{n} should they exist. If
//'   \eqn{n} is prime, the returned list will only contain \eqn{n}.
//' @examples
//' factor_trial(9)
//' factor_trial(121)
//' @references Trial division. (2017, April 30). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Trial_division&oldid=778023614
//' @export
// [[Rcpp::export]]
NumericVector factor_trial(int n) {
  return _factor_trial(n);
}


//' Computes the factorization of an integer \eqn{n} by Fermat's factorization
//' method.
//'
//' Fermat's factorization theorem redefines a composite number \eqn{n} as the
//' difference of squares: \deqn{n = a^2 - b^2} Which can also be written as:
//' \deqn{n = (a + b)(a - b)}
//'
//' @param n Integer to be factored into product of smaller integers.
//' @return vector of length two containing factors of integers
//' @examples
//' fermat_factor(9)
//' fermat_factor(30)
//' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
//'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
//'   factorization method. (2017, January 31). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
//' @export
// [[Rcpp::export]]
NumericVector fermat_factor(int n) {
  if (n == 3 || n == 2 || n == 1) {
    NumericVector fac = NumericVector::create(1, n);
    return fac;
  }

  long int a = ceil(sqrt(n));
  long int b = pow(a, 2) - n;

  while(_issquare(b) == false) {
    a = a + 1;
    b = pow(a, 2) - n;
  }

  NumericVector fac = NumericVector::create(a - sqrt(b), a + sqrt(b));
  return fac;
}


//' Implementation of Pollard's rho algorithm for factorizing an
//' integer \eqn{n} into two non-trivial prime numbers.
//'
//' @param n Integer to be factored into product of smaller integers.
//' @return Vector containing the two prime factors of \eqn{n}, should they exist.
//' @examples
//' pollardrho(9)
//' pollardrho(7799)
//' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
//'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
//'   factorization method. (2017, January 31). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
//' @export
// [[Rcpp::export]]
NumericVector pollardrho(int n) {
  int x = 2; 
  int y = 2; 
  int d = 1;

  while (d == 1) {
    x = fmod(pow(x, 2) + 1, n);
    y = fmod(pow(pow(y, 2) + 1, 2), n);
    d = _gcd_recursive(x - y, n);
  }

  if (d == n) {
    return 0;
  }
  
  else {
    NumericVector fac = NumericVector::create(d, n / d);
    return fac;
  }
}
