

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
#' gcd.extended(99, 78)
#' @references Bezout's identity. (2017, May 12). In Wikipedia, The Free
#' Encyclopedia. From
#' https://en.wikipedia.org/w/index.php?title=B%C3%A9zout%27s_identity&oldid=780050687
#' Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009). Introduction to
#' algorithms (3rd ed., pp. 937-938). Cambridge (Inglaterra): Mit Press.
#' @export
gcd.extended <- function(a, b) {
  if (a == 0 && b == 0) {
    stop('a and b cannot both be zero')
  }

  if (b == 0) {
    return(c(a, 1, 0))
  }

  else {
    g <- gcd.extended(b, a %% b)

    d <- g[1]
    x <- g[2]
    y <- g[3]

    h <- c(d, y, x - (a %/% b) * y)

    d <- h[1]
    x <- h[2]
    y <- h[3]
    print(c(d,x,y))
  }

  return(c(d,x,y))
}
