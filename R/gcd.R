
#' Calculates the greatest common divisor of two integers using the Euclidean
#' algorithm.
#'
#' The greatest common divisor of two integers \eqn{a} and \eqn{b} is the
#' greatest of the common divisors between two integers, for example
#' \eqn{gcd(32, 24) = 8}. Several implementations of the Euclidean algorithm are
#' available including a recursive method, division and subtraction (the
#' original version of the algorithm).
#'
#' @param a First integer
#' @param b Second integer
#' @param method Optional, select which algorithm to use when calculating GCD
#' @return the greatest common divisor
#' @examples
#' gcd(24, 32)
#' gcd(125, 25, 'division')
#' gcd(9, 5)
#' gcd(9, 5, 'subtraction')
#' @export
gcd <- function(a, b, method=c('recursive', 'division', 'subtraction')) {

  if (a == 0 && b == 0) {
    stop('a and b cannot both be zero')
  }

  if (method == 'recursive' || is.null(method)) {
    g <- gcd.recursive(a, b)
  }
  else if (method == 'division' || method == 'div') {
    g <- gcd.division(a, b)
  }
  else if (method == 'subtraction' || method == 'sub') {
    g <- gcd.subtraction(a, b)
  }
  else {
    stop('method must be one of recursive, division, or subtraction')
  }

  return(g)
}


#' Calculates the Greatest Common Divisor of two integers using the recursive
#' Euclidean algorithm
#'
#' The recursive implementation of the greatest common divisor algorithm was
#' described in the Elements of Euclid but may even predate that.
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd.recursive(24, 30)
#' gcd.recursive(9, 5)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#'   Introduction to algorithms (3rd ed., pp. 928-930, 934-935). Cambridge
#'   (Inglaterra): Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia,
#'   The Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
#' @export
gcd.recursive <- function(a, b) {
  if (b == 0) {
    return(a)
  }
  else {
    return(gcd.recursive(b, a %% b))
  }
}


#' Calculates the Greatest Common Divisor using the Euclidean division
#' algorithm.
#'
#' The Euclidean division implementation of the greatest common divisor
#' algorithm computes a quotient \eqn{q_k} and a remainder \eqn{r_k} at each
#' step \eqn{k} from the two numbers \eqn{a} and \eqn{b}. The quotient component
#' of Euclidean division is not used in the algorithm, thus only modulo
#' operations are required as that only returns the remainder.
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd.division(24, 30)
#' gcd.division(9, 5)
#' gcd.division(193752, 234574)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#'   Introduction to algorithms (3rd ed., pp. 928-930). Cambridge (Inglaterra):
#'   Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
#'    Euclidean division. (2017, May 10). In Wikipedia, The Free Encyclopedia.
#'   From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_division&oldid=779699188
#' @export
gcd.division <- function(a, b) {
  while (b != 0) {
    x <- b
    b <- a %% b
    a <- x
  }

  return(a)
}


#' Computes the Greatest Common Divisor of two integers using the Euclidean subtraction algorithm.
#'
#' Computes the greatest common divisor using the original implementation of the algorithm by
#' Euclid. In this version of the algorithm, the quotient \eqn{q_k} and remainder \eqn{r_k}
#' is calculated by repeated division by subtraction. Therefore, in this implementation of the
#' greatest common divisor algorithm, the modulo operation in the division implementation is
#' replaced by division by repeated subtraction.
#'
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd.subtraction(24, 30)
#' gcd.subtraction(9, 5)
#' gcd.subtraction(135614, 234562)
#' @export
gcd.subtraction <- function(a, b) {
  while (a != b) {

    if (a > b) {
      a <- a - b
    }
    else {
      b <- b - a
    }

  }
  return(a)
}
