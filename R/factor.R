

#' Performs integer factorization.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @param method Specifies the method to use when performing integer
#' factorization. Available methods are trial division, Fermat
#' factorization and Pollard-Rho factorization.
#' @return The factors of the integer, should they exist
#' @examples
#' factor(4)
#' factor(9, 'trial')
#' factor(36, 'pollardrho')
#' @export
factor <- function(n, method=c('trial', 'fermat', 'pollardrho')) {

  if (n != round(n)) {
    stop('n must be an integer to factor')
  }
  if (n < 2) {
    stop(' n must be at least 2 for a factor to exist')
  }

  if (method == 'trial' || is.null(method)) {
    f <- factor.trial(n)
  }
}


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
#' factor.trial(9)
#' factor.trial(19742)
#' factor.trial(13)
#' @references Trial division. (2017, April 30). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Trial_division&oldid=778023614
#' @export
factor.trial <- function(n) {

  if (isprime(n)) {
    return(n)
  }

  div = 2
  factors <- vector()

  while (n %% div == 0) {

    factors <- append(factors, div)
    n <- n / div

  }

  div <- div + 1

  while (n > 1 && div <= sqrt(n)) {

    if (n %% div == 0) {
      factors <- append(factors, div)
      n <- n / div
    }
    else {
      div <- div + 2
    }

  }

  if (n > 1) {
    factors <- append(factors, n)
  }

  return(factors)
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
#' factor.fermat(9)
#' factor.fermat(13742)
#' factor.fermat(17)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
factor.fermat <- function(n) {
  if (isprime(n)) {
    return(n)
  }

  a <- ceiling(sqrt(n))
  b <- a^2 - n

  while (issquare(b) == FALSE) {
    a <- a + 1
    b <- a^2 - n
  }

  return(c(a - sqrt(b), a + sqrt(b)))
}


#' Implementation of Pollard's rho algorithm for factorizing an
#' integer \eqn{n} into two non-trivial prime numbers.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return Vector containing the two prime factors of \eqn{n}, should they exist.
#' @examples
#' factor.pollardrho(9)
#' factor.pollardrho(18364)
#' factor.pollardrho(13)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
factor.pollardrho <- function(n) {
  x <- 2
  y <- 2
  d <- 1

  while (d == 1) {
    x <- x^2 + 1 %% n
    y <- ((y^2 + 1)^2 + 1) %% n
    d <- gcd.recursive(abs(x - y), n)
  }

  if (d == n) {
    stop('could not find factor')
  }
  else {
    return(c(d, n %/% d))
  }
}
