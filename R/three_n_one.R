

three.n.one <- function(n) {
  if (n == 1) {
    return(n)
  }

  tno.seq <- vector()

  while (n > 1) {
    if (iseven(n)) {
      n <- n / 2
      tno.seq <- append(tno.seq, n)
    }
    else {
      n <- 3 * n + 1
      tno.seq <- append(tno.seq, n)
    }
  }

  return(tno.seq)
}

three.n.one(9)
