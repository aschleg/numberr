

#' Computes the factors of an integer, should they exist, using the trial
#' division method.
#'
#' Integer factorization by trial division is the most inefficient algorithm for
#' decomposing a composite number. Trial division is the method of testing if
#' \eqn{n} is divisible by a smaller number, beginning with 2 and proceeding
#' upwards. This order is used to eliminate the need to test for multiples of 2
#' and 3. Also, the trial factors never need to go further than the square root
#' of \eqn{n}, \eqn{\sqrt{n}}, due to the fact that if \eqn{n} has a factor,
#' there exists a factor \eqn{f \leq \sqrt{n}}.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return Vector containing the factors of \eqn{n} should they exist. If
#'   \eqn{n} is prime, the returned list will only contain \eqn{n}.
#' @examples
#' factortrial(9)
#' factortrial(19742)
#' factortrial(13)
#' @references Trial division. (2017, April 30). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Trial_division&oldid=778023614
#' @export
factortrial <- function(n) {
  .Call('_numberr_factor_trial', PACKAGE = 'numberr', n)
}


#' Computes the factorization of an integer \eqn{n} by Fermat's factorization
#' method.
#'
#' Fermat's factorization theorem redefines a composite number \eqn{n} as the
#' difference of squares: \deqn{n = a^2 - b^2} Which can also be written as:
#' \deqn{n = (a + b)(a - b)}
#'
#' @param n Integer to be factored into product of smaller integers.
#' @examples
#' fermat(9)
#' fermat(13742)
#' fermat(17)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
fermat_factor <- function(n) {
  .Call('_numberr_fermat_factor', PACKAGE = 'numberr', n)
}


#' Implementation of Pollard's rho algorithm for factorizing an
#' integer \eqn{n} into two non-trivial prime numbers.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return Vector containing the two prime factors of \eqn{n}, should they exist.
#' @examples
#' pollardrho(9)
#' pollardrho(18364)
#' pollardrho(13)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
pollardrho <- function(n) {
  .Call('_numberr_pollardrho', PACKAGE = 'numberr', n)
}
