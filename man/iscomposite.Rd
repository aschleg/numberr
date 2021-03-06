% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{iscomposite}
\alias{iscomposite}
\title{Tests whether a given value \eqn{n} is composite. Essentially the opposite of
the isprime() function.}
\usage{
iscomposite(n)
}
\arguments{
\item{n}{Value to test}
}
\value{
TRUE if n is composite, FALSE otherwise
}
\description{
A composite number is defined as a positive integer :math:`n` that has a
factor than 1 and itself. In short, a composite number is not prime.
}
\examples{
iscomposite(5)
iscomposite(11)
}
\references{
Weisstein, Eric W. "Composite Number." From MathWorld--A Wolfram
Web Resource. http://mathworld.wolfram.com/CompositeNumber.html
}
