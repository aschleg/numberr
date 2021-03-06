% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{risingfactorial}
\alias{risingfactorial}
\title{Computes the rising factorial. Also known as the Pochhammer symbol.}
\usage{
risingfactorial(x, n)
}
\arguments{
\item{x}{integer or character}

\item{n}{integer}
}
\value{
Computed rising factorial
}
\description{
The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
\rangle_n}) is also known as the Pochhammer symbol in other areas of
mathematics. The rising factorial is related to the gamma function
\eqn{\Gamma (z)}. \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}}
where \eqn{x^(0) = 1}. The rising factorial is related to the falling
factorial by: \deqn{x^{(n)} = (-x)_n (-1)^n}
}
\examples{
risingfactorial(5, 3)
risingfactorial(10, 6)
}
\references{
Falling and rising factorials. (2017, June 8). In Wikipedia, The
  Free Encyclopedia. From
  https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
   Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
  Resource. http://mathworld.wolfram.com/RisingFactorial.html
}
