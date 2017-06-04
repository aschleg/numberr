

nfactorial <- function(n) {
  f <- seq(2, n)
  fac <- 1

  for (i in rev(f)) {
    fac <- fac * i
  }
  return(fac)

}


stirling <- function(n) {
  f <- sqrt((2 * n + 1/3) * pi) * n^n * exp(-n)

  return(f)
}


stirlingln <- function(n, keep.log = FALSE) {

  f <- n * log(n) - n + (1/6) * log(n * (1 + 4 * n * (1 + 2 * n))) + .5 * log(pi)

  if (keep.log == FALSE) {
    f <- exp(f)
  }

  return(f)
}
