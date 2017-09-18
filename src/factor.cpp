#include <Rcpp.h>
#include <cmath>
#include "isprime.h"
#include "integers.h"
#include "gcd.h"

using namespace Rcpp;


//' Computes the factorization of an integer \eqn{n} by Fermat's factorization
//' method.
//'
//' Fermat's factorization theorem redefines a composite number \eqn{n} as the
//' difference of squares: \deqn{n = a^2 - b^2} Which can also be written as:
//' \deqn{n = (a + b)(a - b)}
//'
//' @param n Integer to be factored into product of smaller integers.
//' @examples
//' fermat(9)
//' fermat(13742)
//' fermat(17)
//' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
//'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
//'   factorization method. (2017, January 31). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
//' @export
// [[Rcpp::export]]
NumericVector fermat(int n) {
  if (_isprime(n) == true) {
    return n;
  }
  
  int a = ceil(sqrt(n));
  int b = pow(a, 2) - n;
  
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
//' pollardrho(18364)
//' pollardrho(13)
//' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
//'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
//'   factorization method. (2017, January 31). In Wikipedia, The Free
//'   Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
//' @export
// [[Rcpp::export]]
NumericVector pollardrho(int n) {
  int x = 2; int y = 2; int d = 1;
  
  while (d == 1) {
    x = pow(x, 2) + 1 % n;
    y = fmod(pow(pow(y, 2) + 1, 2), n);
    d = _gcd_recursive(abs(x - y), n);
  }
  
  if (d == n) {
    return 0;
  }
  else {
    NumericVector fac = NumericVector::create(d, n / d);
    return fac;
  }
}