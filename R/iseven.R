

#' Tests if a given value \eqn{n} is even or not.
#'
#' An even number is defined as an integer with the form \eqn{n = 2k} where
#' \eqn{k} is also an integer. Put differently, an even number is not odd and is
#' thus evenly divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is even, FALSE otherwise
#' @examples
#' iseven(5)
#' iseven(4)
#' iseven(4.23)
#' @references Weisstein, Eric W. "Even Number." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/EvenNumber.html
#' @export
iseven <- function(n) {
  if (n != round(n)) {
    return(FALSE)
  }

  if (isodd(n) == TRUE) {
    return(FALSE)
  }

  return(TRUE)
}
