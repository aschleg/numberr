

#' Computes the Fibonacci sequence up to given value of n.
#'
#' The Fibonacci sequence is defined by a recurrence relation where \eqn{f_n}
#' denotes the series up to \eqn{n} points. \deqn{f_n = f_{n-1} + f_{n-2}}
#' With initial coniditions: \deqn{f_1 = 1, \qquad f_2 = 2}
#' @param n Integer designating the stopping point of the Fibonacci sequence
#' @param output If 'last', the last integer in the Fibonacci sequence up to n
#'   is returned, if 'array', the entire sequence is returned. Defaults to
#'   'last'.
#' @return Last integer in Fibonacci sequence up to \eqn{n} or the an array of
#'   the Fibonacci sequence up to \eqn{n}.
#' @examples
#' fibonacci(10)
#' fibonacci(10, 'array')
#' @references Moler, C. (2011). Numerical computing with MATLAB (1st ed.).
#' Philadelphia, Pa: Society for Industrial & Applied Mathematics.
#' @export
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
