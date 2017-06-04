

isrelativeprime <- function(a, b) {

  if (gcd(a, b) == 1) {
    return(TRUE)
  }

  return(FALSE)
}
