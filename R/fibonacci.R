

fibonacci <- function(n, output=c('last', 'array')) {
  fn <- vector(length = n + 1)

  fn[1] <- 0
  fn[2] <- 1

  for (i in seq(3, n + 2)) {
    fn[i] <- fn[i - 1] + fn[i - 2]
  }

  if (output == 'last' || is.null(output) == TRUE || output != 'array') {
    return(fn[seq.int(to = length(fn), length.out = 1)])
  }
  else {
    return(fn)
  }
}
