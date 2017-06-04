

iseven <- function(n) {
  if (n != round(n)) {
    return(FALSE)
  }

  if (isodd(n) == TRUE) {
    return(FALSE)
  }

  return(TRUE)
}
