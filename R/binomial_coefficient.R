
#' Calculates the binomial coefficient. Wraps all three binomial coefficient
#' functions and defaults to the multiplicative method. Other methods can be
#' specified by the method argument.
#'
#' The binomial coefficient \eqn{\binom{n}{k}} is defined as the number of ways
#' of selecting a set of \eqn{k} elements (unordered) from a set of \eqn{n}
#' elements and is read as \eqn{n} choose \eqn{k}. The compact form of the
#' binomial coefficient equation is defined as: \deqn{\binom{n}{k} =
#' \frac{n!}{k!(n - k)!} \qquad 0 \leq k \leq n}
#'
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @param method Sets method to calculate binomial coefficient. Defaults to
#'   multiplicative. Be warned the recursive method for larger integers can take
#'   an exorbitant amount of time to complete.
#' @return The binomial coefficient
#' @examples
#' binomial.coefficient(4, 2)
#' binomial.coefficient(10, 5)
#' binomial.coefficient(10, 5, 'multiplicative')
#' binomial.coefficient(10, 5, 'factorial')
#' @references Press, W., Teukolsky, S., Vetterling, W., & Flannery, B. (2007).
#'   Numerical recipes (3rd ed.). Cambridge: Cambridge University Press.
#'   Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource.http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial.coefficient <- function(n, k, method = c('multiplicative', 'recursive', 'factorial')) {
  if (k <= 0 || n <= 0 || k > n) {
    stop('Incorrect arguments to compute binomial coefficient')
  }

  if (method == 'multiplicative' || is.null(method)) {
    return(binomial.coefficient.multiplicative(n, k))
  }
  else if (method == 'recursive') {
    return(binomial.coefficient.recursive(n, k))
  }
  else if (method == 'factorial') {
    return(binomial.coefficient.factorial(n, k))
  }

  stop('method must be one of multiplicative, recursive, or factorial')

}


#' Calculates the binomial coefficient using the multiplicative equation.
#'
#' The multiplicative method for computing the binomial coefficient is more
#' efficient than the compact form calculation and is defined as:
#' \deqn{\binom{n}{k} = \frac{n(n-1)(n-2) \cdots (n-(k-1))}{k(k-1)(k-2) \cdots
#' 1} = \prod^k_{i=1} \frac{n + 1 - i}{i}}
#'
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @examples
#' binomial.coefficient.multiplicative(10, 5)
#' binomial.coefficient.multiplicative(20, 10)
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial.coefficient.multiplicative <- function(n, k) {

  bico <- 1
  nk <- min(n, n - k)
  j <- 1

  for (c in 1:nk) {
    bico <- bico * (n + 1 - j) / j
    j <- j + 1
  }

  return(bico)
}


#' Calculates the binomial coefficient using a recursive method.
#'
#' The recursive method of the binomial coefficient calculation is defined as:
#' \deqn{\binom{n}{k} = \binom{n - 1}{n - k} + binom{n - 1}{k} \qquad for n, k:
#' 1 \leq k \leq n - 1} With boundary values: \deqn{\binom{n}{0} = \binom{n}{n}
#' = 1}
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial.coefficient.recursive <- function(n, k) {

  if (k == n || k == 0) {
    return(1)
  }
  else {
    return(binomial.coefficient.recursive(n - 1, k - 1) + binomial.coefficient.recursive(n - 1, k))
  }
}


#' Calculates the binomial coefficient using the factorial method.
#'
#' The binomial coefficient equation (in compact form) is defined as:
#' \deqn{\binom{n}{k} = \frac{n!}{k!(n-k)!} \qquad 0 \leq k \leq n}
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial.coefficient.factorial <- function(n, k) {

  nk <- min(n, n - k)
  bico <- factorial(n) / (factorial(k) * factorial(nk))

  return(bico)
}
