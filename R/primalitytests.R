

#' Tests whether a given value n is prime
#'
#' A prime number is defined as a positive integer, \eqn{n > 1} that has no
#' positive divisors other than 1 and itself.
#'
#' @param n Value to test
#' @return TRUE if n is prime, FALSE otherwise
#' @examples
#' is.prime(9)
#' is.prime(3)
#' is.prime(10927)
#' @references Weisstein, Eric W. "Prime Number." From MathWorld--A Wolfram Web
#' Resource. http:#mathworld.wolfram.com/PrimeNumber.html
#' @export
is.prime <- function(n) {
  .Call('_numberr_isprime', PACKAGE = 'numberr', n)
}


lucas.lehmer <- function(n) {
  .Call('_numberr_lucas_lehmer', PACKAGE = 'numberr', n)
}
