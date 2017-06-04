

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


factor.trial <- function(n) {
  div = 2
  factors <- list()

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

  return(factor)
}


factor.fermat <- function(n) {
  if (isprime(n)) {
    return(n)
  }

  a <- ceiling(sqrt(n))
  b <- a^2 - n

  while (issquare(n)) {
    a <- a + 1
    b <- a^2 - n
  }

  return(c(a, sqrt(b)))
}


factor.pollardrho <- function(n) {
  x <- 2
  y <- 2
  d <- 1

  while (d == 1) {
    x <- x^2 + 1 %% n
    y <- ((y^2 + 1)^2 + 1) %% n
  }

  if (d == n) {
    stop('could not find factor')
  }
  else {
    return(c(d, n %/% d))
  }
}
