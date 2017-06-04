

isodd <- function(n) {
  if (n != round(n)) {
    return(FALSE)
  }

  if (n %% 2 == 0) {
    return(FALSE)
  }

  return(TRUE)
}
