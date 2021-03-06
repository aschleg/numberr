% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{factor_trial}
\alias{factor_trial}
\title{Computes the factors of an integer, should they exist, using the trial
division method.}
\usage{
factor_trial(n)
}
\arguments{
\item{n}{Integer to be factored into product of smaller integers.}
}
\value{
Vector containing the factors of \eqn{n} should they exist. If
  \eqn{n} is prime, the returned list will only contain \eqn{n}.
}
\description{
Integer factorization by trial division is the most inefficient algorithm for
decomposing a composite number. Trial division is the method of testing if
\eqn{n} is divisible by a smaller number, beginning with 2 and proceeding
upwards. This order is used to eliminate the need to test for multiples of 2
and 3. Also, the trial factors never need to go further than the square root
of \eqn{n}, \eqn{\sqrt{n}}, due to the fact that if \eqn{n} has a factor,
there exists a factor \eqn{f \leq \sqrt{n}}.
}
\examples{
factor_trial(9)
factor_trial(121)
}
\references{
Trial division. (2017, April 30). In Wikipedia, The Free
  Encyclopedia. From
  https://en.wikipedia.org/w/index.php?title=Trial_division&oldid=778023614
}
