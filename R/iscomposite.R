

#' Tests whether a given value \eqn{n} is composite. Essentially the opposite of
#' the isprime() function
#' 
#' A composite number is defined as a positive integer :math:`n` that has a
#' factor than 1 and itself. In short, a composite number is not prime.
#' 
#' @param n Value to test
#' @return TRUE if n is composite, FALSE otherwise
#' @examples 
#' iscomposite(9)
#' iscomposite(3)
#' iscomposite(10927)
#' @references Weisstein, Eric W. "Composite Number." From MathWorld--A Wolfram
#' Web Resource. http://mathworld.wolfram.com/CompositeNumber.html
#' @export
iscomposite <- function(n) {
  if (isprime(n) == TRUE) {
    return(FALSE)
  }
  return(TRUE)
}
