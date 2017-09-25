
#' Calculates the binomial coefficient with several different algorithm methods
#' available.
#'
#' The binomial coefficient equation (in compact form) is defined as:
#' \deqn{\binom{n}{k} = \frac{n!}{k!(n-k)!} \qquad 0 \leq k \leq n}
#'
#' The multiplicative method for computing the binomial coefficient is more
#' efficient than the compact form calculation and is defined as:
#' \deqn{\binom{n}{k} = \frac{n(n-1)(n-2) \cdots (n-(k-1))}{k(k-1)(k-2) \cdots
#' 1} = \prod^k_{i=1} \frac{n + 1 - i}{i}}
#'
#' The recursive method of the binomial coefficient calculation is defined as:
#' \deqn{\binom{n}{k} = \binom{n - 1}{n - k} + binom{n - 1}{k} \qquad for n, k:
#' 1 \leq k \leq n - 1} With boundary values: \deqn{\binom{n}{0} = \binom{n}{n}
#' = 1}
#'
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @param method selects the algorithm to use for calculating the binomial
#'   coefficient. Options include the multiplicative (default), recursive, or
#'   factorial methods. Please note the recursive method can be much slower than
#'   the other two choices.
#' @return The binomial coefficient
#' @examples
#' binomialcoefficient(10, 5)
#' binomialcoefficient(5, 3, 'factorial')
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http:#www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http:#mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomialcoefficient <- function(n, k, method = c('factorial', 'multiplicative', 'recursive')) {
  if (method == 'factorial') {
    .Call('_numberr_binomial_factorial', PACKAGE = 'numberr', n, k)
  }
  else if (method == 'multiplicative') {
    .Call('_numberr_binomial_multiplicative', PACKAGE = 'numberr', n, k)
  }
  else if (method == 'recursive') {
    .Call('_numberr_binomial_recursive', PACKAGE = 'numberr', n, k)
  }
  else {
    .Call('_numberr_binomial_multiplicative', PACKAGE = 'numberr', n, k)
  }
}
