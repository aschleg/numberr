

#' Tests whether a given given value n is odd.
#'
#' An odd number is an integer that has the form \eqn{n = 2k + 1} for an integer
#' \eqn{k}. In other words, an odd number is an integer that is not evenly
#' divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is odd, FALSE otherwise
#' @examples
#' isodd(5)
#' isodd(4)
#' isodd(5.25)
#' @references Weisstein, Eric W. "Odd Number." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/OddNumber.html
#' @export
isodd <- function(n) {
  if (n != round(n)) {
    return(FALSE)
  }

  if (n %% 2 == 0) {
    return(FALSE)
  }

  return(TRUE)
}
