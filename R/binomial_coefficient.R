

binomial.coefficient <- function(n, k, method = c('multiplicative', 'recursive', 'factorial') {
  if (k <= 0 || n <= 0 || k > n) {
    stop('Incorrect arguments to compute binomial coefficient')
  }

  if (method == 'multiplicative' || is.null(method)) {
    return(binomial.coefficient.multiplicative(n, k))
  }
  else if (method == 'recursive') {

  }

  stop('method must be one of multiplicative, recursive, or factorial')

}


binomial.coefficient.multiplicative <- function(n, k) {

  bico <- 1
  nk <- min(n, n - k)
  j <- 1

  for (c in 1:nk) {
    bico <- bico * (n + 1 - j) / j
    j <- j + 1
  }

  return(bico)
}


binomial.coefficient.recursive <- function(n, k) {

  if (k == n || k == 0) {
    return(1)
  }
  else {
    return(binomial.coefficient.recursive(n - 1, k - 1) + binomial.coefficient.recursive(n - 1, k))
  }
}


binomial.coefficient.factorial <- function(n, k) {

  bico <- nfactorial(n) / (nfactorial(k) * nfactorial(nk))

  return(bico)
}
