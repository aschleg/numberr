

#' Tests whether a given value n is prime
#'
#' A prime number is defined as a positive integer, \eqn{n > 1} that has no
#' positive divisors other than 1 and itself.
#'
#' @param n Value to test
#' @return TRUE if n is prime, FALSE otherwise
#' @examples
#' isprime(9)
#' isprime(3)
#' isprime(10927)
#' @references Weisstein, Eric W. "Prime Number." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/PrimeNumber.html
#' @export
isprime <- function(n) {
  if (n != round(n) || n == 1) {
    return(FALSE)
  }
  else if (n == 2 || n == 3 || n == 5) {
    return(TRUE)
  }

  if (n %% 2 == 0 || n %% 3 == 0) {
    return(FALSE)
  }

  for (i in 7:floor(sqrt(n))) {
    if (n %% i == 0 || n %% (i + 2) == 0) {
      return(FALSE)
    }
  }

  return(TRUE)
}
