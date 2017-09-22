

#' Calculates the Greatest Common Divisor.
#'
#' The Euclidean division implementation of the greatest common divisor
#' algorithm computes a quotient \eqn{q_k} and a remainder \eqn{r_k} at each
#' step \eqn{k} from the two numbers \eqn{a} and \eqn{b}. The quotient component
#' of Euclidean division is not used in the algorithm, thus only modulo
#' operations are required as that only returns the remainder.
#'
#' The subtraction method for computing the GCD is the original implementation of the algorithm by
#' Euclid. In this version of the algorithm, the quotient \eqn{q_k} and remainder \eqn{r_k}
#' is calculated by repeated division by subtraction. Therefore, in this implementation of the
#' greatest common divisor algorithm, the modulo operation in the division implementation is
#' replaced by division by repeated subtraction.
#'
#' @param a First integer
#' @param b Second integer
#' @param method selects the algorithm used to compute the GCD. Options are recursive (default), subtraction, and division.
#' @return The greatest common divisor
#' @examples
#' gcd(24, 30)
#' gcd(9, 5)
#' gcd(193752, 234574)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#'   Introduction to algorithms (3rd ed., pp. 928-930). Cambridge (Inglaterra):
#'   Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
#'    Euclidean division. (2017, May 10). In Wikipedia, The Free Encyclopedia.
#'   From
#'   https:#en.wikipedia.org/w/index.php?title=Euclidean_division&oldid=779699188
#' @export
gcd <- function(a, b, method = c('division', 'subtraction', 'recursive')) {
  if (method == 'division') {
    .Call('_numberr_gcd_division', PACKAGE = 'numberr', a, b)
  }
  else if (method == 'subtraction') {
    .Call('_numberr_gcd_subtraction', PACKAGE = 'numberr', a, b)
  }
  else if (method == 'recursive') {
    .Call('_numberr_gcd_recursive', PACKAGE = 'numberr', a, b)
  }
  else {
    .Call('_numberr_gcd_recursive', PACKAGE = 'numberr', a, b)
  }
}


#' Implementation of the extended form of the Euclidean algorithm which computes
#' the greatest common divisor \eqn{d} and integers \eqn{x} and \eqn{y} such
#' that \eqn{ax + by = d}.
#'
#' The extended Euclidean algorithm computes the greatest common divisor,
#' \eqn{d} of two integers \eqn{a} and \eqn{b} as well as the coefficients
#' \eqn{x} and \eqn{y} such that: \deqn{d = gcd(a, b) = ax + by} The
#' coefficients \eqn{x} and \eqn{y} are known as Bezout's coefficients and can
#' be zero or negative.
#'
#' @param a First integer
#' @param b Second integer
#' @examples
#' gcd_extended(99, 78)
#' @references Bezout's identity. (2017, May 12). In Wikipedia, The Free
#' Encyclopedia. From
#' https:#en.wikipedia.org/w/index.php?title=B%C3%A9zout%27s_identity&oldid=780050687
#' Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009). Introduction to
#' algorithms (3rd ed., pp. 937-938). Cambridge (Inglaterra): Mit Press.
#' @export
gcd_extended <- function(a, b) {
  .Call('_numberr_gcd_extended', PACKAGE = 'numberr', a, b)
}
