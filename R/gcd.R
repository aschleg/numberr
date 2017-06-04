

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

gcd.recursive <- function(a, b) {
  if (b == 0) {
    return(a)
  }
  else {
    return(gcd.recursive(b, a %% b))
  }
}


gcd.division <- function(a, b) {
  while (b != 0) {
    x <- b
    b <- a %% b
    a <- x
  }

  return(a)
}


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
