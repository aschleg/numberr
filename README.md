## Numberr

[![Travis-CI Build Status](https://travis-ci.org/aschleg/numberr.svg?branch=master)](https://travis-ci.org/aschleg/numberr)
[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/aschleg/numberr?branch=master&svg=true)](https://ci.appveyor.com/project/aschleg/numberr)

The numberr package contains many algorithms and functions related to number theory. Most functions are written in `C++` using [Rcpp](https://cran.r-project.org/web/packages/Rcpp/index.html).

## Installation

The Numberr package is currently not on CRAN, thus the best way to install the package in the mean time is to 
use the [devtools](https://cran.r-project.org/web/packages/devtools/index.html) package:

~~~~
library(devtools)
install_github("aaron/numberr")
~~~~

## Available Algorithms and Functions

* Integer Factorization
  - Trial factorization
  - Fermat
  - Pollard's rho
* Binomial Coefficient
  - Recursive, multiplicative and factorial methods
* Factorials
  - Stirling's Approximation
  - Gosper's natural log Approximation
  - Ramanujan's factorial approximation
* Greatest Common Divisor
  - Recursive, division, and subtraction (Euclid) methods
* Primes and Composite Numbers
  - Coprime integers
  - squares, composites
* Primality Tests
  - Naive method
  - Lucas-Lehmer

### License

MIT
