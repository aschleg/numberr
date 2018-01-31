#include <Rcpp.h>

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <string>
#include "factorial.h"

using namespace Rcpp;


//' Function for calculating factorials using the standard approach as explained
//' below.
//'
//' Factorials are denoted for a positive integer \eqn{x} as \eqn{x!} and are
//' defined as: \deqn{x! = (x)(x - 1)(x - 2) \cdots (2)(1)} For example, the
//' factorial of 5 is written as: 5! = (5)(4)(3)(2)(1) = 120
//'
//' @param n Desired integer to compute factorial
//' @references Press, W., Teukolsky, S., Vetterling, W., & Flannery, B. (2007).
//'   Numerical recipes (3rd ed.). Cambridge: Cambridge University Press.
//'   Weisstein, Eric W. "Factorial." From MathWorld--A Wolfram Web Resource.
//'   http://mathworld.wolfram.com/Factorial.html
//' @export
// [[Rcpp::export]]
long int factorial(int n) {
  return _factorial(n);
}


//' Approximates a factorial of an integer \eqn{n} using Stirling's
//' Approximation. Specifically, the approximation is done using a method
//' developed by Gosper.
//'
//' Stirling's approximation is a method of approximating a factorial \eqn{n!}.
//' As the value of \eqn{n} increases, the more exact the approximation becomes;
//' however, it still yields almost exact results for small values of \eqn{n}.
//' The approximation used is given by Gosper, which is noted to be a better
//' approximation to \eqn{n!} and also results in a very close approximation to
//' \eqn{0! = 1}. \deqn{n! \approx \sqrt{(2n + \frac{1}{3})\pi} n^n e^{-n}}
//'
//' @param n desired integer to approximate factorial
//' @references Stirling's approximation. (2017, March 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
//'    Weisstein, Eric W. "Stirling's Approximation." From MathWorld--A Wolfram
//'   Web Resource. http://mathworld.wolfram.com/StirlingsApproximation.html
//' @export
// [[Rcpp::export]]
float stirling(int n) {

  return _stirling(n);
}


//' Approximates the factorial of n using the approximation given by Ramanujan
//' in his lost notebook (Ramanujan 1988, as cited in Wikipedia). Computing the
//' factorial in logarithmic form is useful as it helps avoid overflow when n is
//' large. As values of n increase, the approximation given becomes more exact.
//'
//' It is often useful to compute the logarithmic form of the factorial and
//' convert it to exponent form to avoid overflow. The approximation is an
//' alternative approach given by Srinivasa Ramanujan (Ramanujan 1988). \deqn{ln
//' n! \approx n ln n - n + \frac{1}{6} ln(n(1 + 4n(1 + 2n))) + \frac{1}{2} ln
//' \pi}
//'
//' @param n desired integer to approximate factorial
//' @references Stirling's approximation. (2017, March 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
//' @export
// [[Rcpp::export]]
float stirlingln(int n) {

  return _stirlingln(n);
}


//' Approximates the factorial :math:`n!` given an integer :math:`n` using
//' Ramanujan's formula. Ramanujan's formula is just as or more accurate than
//' several other factorial approximation formulas.
//'
//' Ramanujan's formula is another factorial approximation method known for its
//' accuracy in comparison to other factorial approximation approaches including
//' Stirling's and Gosper's approximations. Ramanujan's formula is defined as:
//' \deqn{n! \approx \sqrt{\pi} \left(\frac{n}{e}\right)^n \sqrt[6]{8n^3 + 4n^2
//' + n + \frac{1}{30}}}
//'
//' @param n integer to approximate factorial
//' @references Mortici, Cristinel. On Gosper's Formula for the Gamma Function.
//'   Valahia University of Targoviste, Department of Mathematics. Retrieved
//'   from http://files.ele-math.com/articles/jmi-05-53.pdf
//' @export
// [[Rcpp::export]]
float ramanujan(int n) {

  return _ramanujan(n);
}

//' Computes the falling factorial.
//'
//' The falling factorial, denoted as
//' \eqn{(x)_{n}} (or \eqn{x^{\underline{n}}}) is defined as the following:
//' \deqn{(x)_n = x(x - 1) \cdots (x - (n - 1))} The first few falling
//' factorials are then: \deqn{(x)_0 = 1} \deqn{(x)_1 = x} \deqn{(x)_2 = x(x -
//' 1)} \deqn{(x)_3 = x(x - 1)(x - 2)} \deqn{(x)_4 = x(x - 1)(x - 2)(x - 3)}
//'
//' @param x integer
//' @param n integer
//' @examples
//' fallingfactorial(6, 4)
//' fallingfactorial(5, 3)
//' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
//'    Weisstein, Eric W. "Falling Factorial." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/FallingFactorial.html
//' @export
// [[Rcpp::export]]
float fallingfactorial(int x, int n) {
  float f = 1.0;

  if (n < 0) {
    for (int i = 0; i >= n; i--) {
      f = f * (x - i);
    }
    f = 1.0 / f;
  }
  else {
    for (int i = 0; i <= abs(n) - 1; i++) {
      f = f * (x - i);
    }
  }

  return f;
}


//' Computes the falling factorial function as a string.
//'
//' The falling factorial, denoted as
//' \eqn{(x)_{n}} (or \eqn{x^{\underline{n}}}) is defined as the following:
//' \deqn{(x)_n = x(x - 1) \cdots (x - (n - 1))} The first few falling
//' factorials are then: \deqn{(x)_0 = 1} \deqn{(x)_1 = x} \deqn{(x)_2 = x(x -
//' 1)} \deqn{(x)_3 = x(x - 1)(x - 2)} \deqn{(x)_4 = x(x - 1)(x - 2)(x - 3)}
//'
//' @param x integer
//' @param n integer
//' @return string representation of falling factorial function.
//' @examples
//' fallingfactorial_function("x", 2)
//' fallingfactorial_function("z", 3)
//' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
//'    Weisstein, Eric W. "Falling Factorial." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/FallingFactorial.html
//' @export
// [[Rcpp::export]]
std::string fallingfactorial_function(std::string x, int n) {
  std::string f = x;
  std::string parten1 = "*(";
  std::string negsep = " - ";
  std::string parten2 = ")";

  for (unsigned int i = 1; i <= n; i++) {
    std::stringstream j;
    j << i;
    std::string jstr = j.str();
    f = f + parten1 + x + negsep + jstr + parten2;
  }
  return f;
}


//' Computes the rising factorial. Also known as the Pochhammer symbol.
//'
//' The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
//' \rangle_n}) is also known as the Pochhammer symbol in other areas of
//' mathematics. The rising factorial is related to the gamma function
//' \eqn{\Gamma (z)}. \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}}
//' where \eqn{x^(0) = 1}. The rising factorial is related to the falling
//' factorial by: \deqn{x^{(n)} = (-x)_n (-1)^n}
//'
//' @param x integer or character
//' @param n integer
//' @return string representation of rising factorial function.
//' @examples
//' risingfactorial(5, 3)
//' risingfactorial(6, 2)
//' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
//'    Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/RisingFactorial.html
//' @export
// [[Rcpp::export]]
float risingfactorial(int x, int n) {
  float f = 1.0;

  if (n < 0) {
    for (int i = 0; i >= n; i--) {
      f = f * (x + i);
    }
    f = 1.0 / f;
  }
  else {
    for (int i = 0; i <= abs(n) - 1; i++) {
      f = f * (x + i);
    }
  }

  return f;
}


//' Computes the rising factorial, also known as the Pochhammer symbol as a function string.
//' 
//' The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
//' \rangle_n}) is also known as the Pochhammer symbol in other areas of
//' mathematics. The rising factorial is related to the gamma function
//' \eqn{\Gamma (z)}. \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}}
//' where \eqn{x^(0) = 1}. The rising factorial is related to the falling
//' factorial by: \deqn{x^{(n)} = (-x)_n (-1)^n}
//'
//' @param x integer or character
//' @param n integer
//' @return Computed rising factorial
//' @examples
//' risingfactorial_function('x', 2)
//' risingfactorial_function('a', 3)
//' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
//'   Free Encyclopedia. From
//'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
//'    Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
//'   Resource. http://mathworld.wolfram.com/RisingFactorial.html
//' @export
// [[Rcpp::export]]
std::string risingfactorial_function(std::string x, int n) {
  std::string f = x;
  std::string parten1 = "*(";
  std::string negsep = " + ";
  std::string parten2 = ")";

  for (unsigned int i = 1; i <= n; i++) {
    std::stringstream j;
    j << i;
    std::string jstr = j.str();
    f = f + parten1 + x + negsep + jstr + parten2;
  }
  return f;
}
