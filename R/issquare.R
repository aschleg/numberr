

issquare <- function(n) {

  if (ceiling(sqrt(n))^2 == ceiling(n)) {
    return(TRUE)
  }
  return(FALSE)
}
