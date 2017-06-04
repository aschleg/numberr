

isprime <- function(n) {
  if (n != round(n) || n == 1) {
    return(FALSE)
  }
  else if (n == 2 || n == 3 || n == 5) {
    return(TRUE)
  }

  if (n %% 2 == 0 || n %% 3 == 0) {
    return(FALSE)
  }

  for (i in 7:floor(sqrt(n))) {
    if (n %% i == 0 || n %% (i + 2) == 0) {
      return(FALSE)
    }
  }

  return(TRUE)
}
