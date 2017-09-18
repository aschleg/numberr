

#' Calculate the factorial \eqn{n!} of an integer \eqn{n}
#'
#' Factorials are denoted for a positive integer \eqn{x} as \eqn{x!} and are
#' defined as: \deqn{n! = (n)(n - 1)(n - 2) \cdots (2)(1)} For example, the
#' factorial of 5 is written as: \deqn{5! = (5)(4)(3)(2)(1) = 120}
#'
#' @param n Value to calculate
#' @return the factorial of the integer
#' @references Press, W., Teukolsky, S., Vetterling, W., & Flannery, B. (2007).
#'   Numerical recipes (3rd ed.). Cambridge: Cambridge University Press.
#'   Weisstein, Eric W. "Factorial." From MathWorld--A Wolfram Web Resource.
#'   http://mathworld.wolfram.com/Factorial.html
#' @export
.factorial <- function(n) {
  fac <- 1

  for (i in rev(2:n)) {
    fac <- fac * i
  }
  return(fac)

}


#' Approximates a factorial of an integer \eqn{n} using Stirling's
#' Approximation. Specifically, the approximation is done using a method
#' developed by Gosper.
#'
#' Stirling's approximation is a method of approximating a factorial \eqn{n!}.
#' As the value of \eqn{n} increases, the more exact the approximation becomes;
#' however, it still yields almost exact results for small values of \eqn{n}.
#' The approximation used is given by Gosper, which is noted to be a better
#' approximation to \eqn{n!} and also results in a very close approximation to
#' \eqn{0! = 1}. \deqn{n! \approx \sqrt{(2n + \frac{1}{3})\pi} n^n e^{-n}}
#'
#' @param n Value to approximate factorial
#' @return Approximation of factorial
#' @examples
#' stirling(0)
#' stirling(9)
#' stirling(25)
#' @references Stirling's approximation. (2017, March 8). In Wikipedia, The Free
#' Encyclopedia. From
#' https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
#' Weisstein, Eric W. "Stirling's Approximation." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/StirlingsApproximation.html
#' @export
stirling <- function(n) {
  f <- sqrt((2 * n + 1/3) * pi) * n^n * exp(-n)

  return(f)
}


#' Approximates the factorial of n using the approximation given by Ramanujan in
#' his lost notebook (Ramanujan 1988, as cited in Wikipedia).
#'
#' It is often useful to compute the logarithmic form of the factorial and
#' convert it to exponent form to avoid overflow. The approximation is an
#' alternative approach given by Srinivasa Ramanujan (Ramanujan 1988). \deqn{ln
#' n! \approx n ln n - n + \frac{1}{6} ln(n(1 + 4n(1 + 2n))) + \frac{1}{2} ln
#' \pi}
#'
#' @param n Value to calculate
#' @param keep.log Optional. If FALSE, return the factorial in exponent form,
#'   otherwise keep in logarithmic form.
#' @return Factorial as given by Stirling's log factorial approximation.
#' @examples
#' stirlingln(25)
#' stirlingln(10)
#' @references Stirling's approximation. (2017, March 8). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
#' @export
stirlingln <- function(n, keep.log = FALSE) {

  f <- n * log(n) - n + (1/6) * log(n * (1 + 4 * n * (1 + 2 * n))) + .5 * log(pi)

  if (keep.log == FALSE) {
    f <- exp(f)
  }

  return(f)
}


#' Approximates the factorial \eqn{n!} given an integer \eqn{n} using
#' Ramanujan's formula. Ramanujan's formula is just as or more accurate than
#' several other factorial approximation formulas.
#'
#' Ramanujan's formula is another factorial approximation method known for its
#' accuracy in comparison to other factorial approximation approaches including
#' Stirling's and Gosper's approximations. Ramanujan's formula is defined as:
#' \deqn{n! \approx \sqrt{\pi} \left(\frac{n}{e}\right)^n \sqrt[6]{8n^3 + 4n^2 +
#' n + \frac{1}{30}}}
#'
#' @param n Integer to approximate factorial
#' @return Factorial of \eqn{n} as approximated by Ramanujan's formula.
#' @examples
#' ramanujan(10)
#' ramanuajn(5)
#' @references Mortici, Cristinel. On Gosper's Formula for the Gamma Function.
#' Valahia University of Targoviste, Department of Mathematics. Retrieved from
#' http://files.ele-math.com/articles/jmi-05-53.pdf
#' @export
ramanujan <- function(n) {
  if (n != floor(n)) {
    n <- floor(n)
  }

  f <- sqrt(pi * (n / exp(1))^n * sqrt(8 * n^3 + 4 * n^2 + n + (1 / 30)^(1/6)))
  return(f)
}


#' Computes the rising factorial. Also known as the Pochhammer symbol.
#'
#' The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
#' \rangle_n}) is also known as the Pochhammer symbol in other areas of
#' mathematics.
#'
#' The rising factorial is related to the gamma function \eqn{\Gamma (z)}.
#' \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}} where \eqn{x^(0) =
#' 1}. The rising factorial is related to the falling factorial by:
#' \deqn{x^{(n)} = (-x)_n (-1)^n}
#'
#' @param x Integer. The value will be rounded down if the value is not an
#'   integer.
#' @param n Integer. The value will be rounded down if the value is not an
#'   integer.
#' @return If x is an integer, the rising factorial for an integer :math:`n`,
#'   \eqn{(x)_{n}}. If x is a string, the output is the symbolic representation
#'   of the rising factorial.
#' @examples
#' risingfactorial(10, 6)
#' risingfactorial('x', 4)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#' Free Encyclopedia. From
#' https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'
#' Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/RisingFactorial.html
#' @export
rising.factorial <- function(x, n) {
  if (n != floor(n)) {
    n <- floor(n)
  }

  if (is.character(x)) {
    f <- x

    for (i in 2:abs(n)) {
      f <- paste(f, '*(', x, ' + ', as.character(i), ')', sep = '', collapse = '')
    }

    if (n < 0) {
      f <- paste('1 /', f, sep = '', collapse = '')
    }
  }

  else {
    if (x != floor(x)) {
      x = floor(x)
    }

    f <- x
    for (i in 1:abs(n-1)) {
      f <- f * (x + i)
    }

    if (n < 0) {
      f <- 1 / f
    }

  }

  return(f)
}


#' Computes the falling factorial
#'
#' The falling factorial, denoted as \eqn{(x)_{n}} (or \eqn{x^{\underline{n}}})
#' is defined as the following: \deqn{(x)_n = x(x - 1) \cdots (x - (n - 1))} The
#' first few falling factorials are then: \deqn{(x)_0 = 1} \deqn{(x)_1 = x}
#' \deqn{(x)_2 = x(x - 1)} \deqn{(x)_3 = x(x - 1)(x - 2)} \deqn{(x)_4 = x(x -
#' 1)(x - 2)(x - 3)(x - 4)}
#' @param x Integer. The value will be rounded down if the value is not an
#'   integer.
#' @param n Integer. The value will be rounded down if the value is not an
#'   integer.
#' @return  If x is an integer, the falling factorial will be returned. If x is
#'   a string, the symbolic representation of the falling factorial is returned.
#' @examples
#' falling.factorial(10, 5)
#' falling.factorial(10, 2)
#' falling.factorial('x', 2)
#' falling.factorial('a', 4)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'
#'
#'   Weisstein, Eric W. "Falling Factorial." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/FallingFactorial.html
#' @export
falling.factorial <- function(x, n) {
  if (n != floor(n)) {
    n <- floor(n)
  }

  if (is.character(x)) {
    f <- x

    for (i in 2:abs(n)) {
      f <- paste(f, '*(x - ', as.character(i), ')', sep = '', collapse = '')
    }

    if (n < 0) {
      f <- paste('1 /', f, sep = '', collapse = '')
    }
  }

  else {
    if (x != floor(x)) {
      x <- floor(x)
    }

    f <- 1
    for (i in 1:abs(n)) {
      f <- f * (x - i)
    }

    if (n < 0) {
      f <- 1 / f
    }
  }

  return(f)
}
