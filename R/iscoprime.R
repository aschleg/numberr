

#' Tests if two integers are coprime.
#' 
#' Two integers \eqn{a} and \eqn{b} are said to be relatively prime (also called
#' relatively prime) if they share no positive divisors except 1.
#' 
#' @param a First integer
#' @param b Second integer
#' @return TRUE if given integers are coprime, FALSE otherwise
#' @examples 
#' iscoprime(2, 4)
#' iscoprime(2, 3)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#' Introduction to algorithms (3rd ed., pp. 931). Cambridge (Inglaterra): Mit
#' Press. Weisstein, Eric W. "Relatively Prime." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/RelativelyPrime.html
#' @export
iscoprime <- function(a, b) {

  if (gcd(a, b) == 1) {
    return(TRUE)
  }

  return(FALSE)
}
