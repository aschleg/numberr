


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
