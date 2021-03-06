% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{fibonacci}
\alias{fibonacci}
\title{Computes the Fibonacci sequence up to given value of n.}
\usage{
fibonacci(n)
}
\arguments{
\item{n}{Integer designating the stopping point of the Fibonacci sequence}
}
\value{
array of the Fibonacci sequence up to \eqn{n}.
}
\description{
The Fibonacci sequence is defined by a recurrence relation where \eqn{f_n}
denotes the series up to \eqn{n} points. \deqn{f_n = f_{n-1} + f_{n-2}}
With initial coniditions: \deqn{f_1 = 1, \qquad f_2 = 2}
}
\examples{
fibonacci(5)
}
\references{
Moler, C. (2011). Numerical computing with MATLAB (1st ed.).
Philadelphia, Pa: Society for Industrial & Applied Mathematics.
}
