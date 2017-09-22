

#' Tests whether a given value \eqn{n} is composite. Essentially the opposite of
#' the isprime() function.
#'
#' A composite number is defined as a positive integer :math:`n` that has a
#' factor than 1 and itself. In short, a composite number is not prime.
#'
#' @param n Value to test
#' @return TRUE if n is composite, FALSE otherwise
#' @examples
#' is.composite(9)
#' is.composite(3)
#' is.composite(10927)
#' @references Weisstein, Eric W. "Composite Number." From MathWorld--A Wolfram
#' Web Resource. http:#mathworld.wolfram.com/CompositeNumber.html
#' @export
is.composite <- function(n) {
  .Call('_numberr_iscomposite', PACKAGE = 'numberr', n)
}


#' Tests if two integers are coprime.
#'
#' Two integers \eqn{a} and \eqn{b} are said to be relatively prime (also called
#' relatively prime) if they share no positive divisors except 1.
#'
#' @param a First integer
#' @param b Second integer
#' @return TRUE if given integers are coprime, FALSE otherwise
#' @examples
#' is.coprime(2, 4)
#' is.coprime(2, 3)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#' Introduction to algorithms (3rd ed., pp. 931). Cambridge (Inglaterra): Mit
#' Press. Weisstein, Eric W. "Relatively Prime." From MathWorld--A Wolfram Web
#' Resource. http:#mathworld.wolfram.com/RelativelyPrime.html
#' @export
is.coprime <- function(a, b) {
  .Call('_numberr_iscoprime', PACKAGE = 'numberr', a, b)
}


#' Tests if a given value \eqn{n} is even or not.
#'
#' An even number is defined as an integer with the form \eqn{n = 2k} where
#' \eqn{k} is also an integer. Put differently, an even number is not odd and is
#' thus evenly divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is even, FALSE otherwise
#' @examples
#' is.even(5)
#' is.even(4)
#' is.even(4.23)
#' @references Weisstein, Eric W. "Even Number." From MathWorld--A Wolfram Web
#' Resource. http:#mathworld.wolfram.com/EvenNumber.html
#' @export
is.even <- function(n) {
  .Call('_numberr_iseven', PACKAGE = 'numberr', n)
}


#' Tests whether a given given value n is odd.
#'
#' An odd number is an integer that has the form \eqn{n = 2k + 1} for an integer
#' \eqn{k}. In other words, an odd number is an integer that is not evenly
#' divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is odd, FALSE otherwise
#' @examples
#' is.odd(5)
#' is.odd(4)
#' is.odd(5.25)
#' @references Weisstein, Eric W. "Odd Number." From MathWorld--A Wolfram Web
#'   Resource. http:#mathworld.wolfram.com/OddNumber.html
#' @export
is.odd <- function(n) {
  .Call('_numberr_isodd', PACKAGE = 'numberr', n)
}


#' Tests if a given integer is a square number.
#'
#' A square number is an integer that is the square of an integer.
#'
#' @param n Value to test
#' @return TRUE if value is a square number, FALSE otherwise
#' @examples
#' is.square(25)
#' is.square(9)
#' is.square(3)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#' Corvallis, OR: Department of Physics, Oregon State University.
#' @export
is.square <- function(n) {
  .Call('_numberr_issquare', PACKAGE = 'numberr', n)
}
