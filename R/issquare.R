

#' Tests if a given integer is a square number.
#' 
#' A square number is an integer that is the square of an integer.
#' 
#' @param n Value to test
#' @return TRUE if value is a square number, FALSE otherwise
#' @examples 
#' issquare(25)
#' issquare(9)
#' issquare(3)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.). 
#' Corvallis, OR: Department of Physics, Oregon State University.
#' @export
issquare <- function(n) {

  if (ceiling(sqrt(n))^2 == ceiling(n)) {
    return(TRUE)
  }
  return(FALSE)
}
