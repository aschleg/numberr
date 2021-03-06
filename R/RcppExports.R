# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Calculates the binomial coefficient with several different algorithm methods
#' available.
#' 
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @param method selects the algorithm to use for calculating the binomial
#'   coefficient. Options include the multiplicative (default), recursive, or
#'   factorial methods. Please note the recursive method can be very slow and
#'   is not recommended over other algorithms.
#' @return The binomial coefficient
#' @examples
#' binomial_coefficient(5, 3)
#' binomial_coefficient(6, 4, 'factorial')
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https:#en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http:#www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http:#mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial_coefficient <- function(n, k, method = "multiplicative") {
    .Call(`_numberr_binomial_coefficient`, n, k, method)
}

#' Calculates the binomial coefficient using a recursive method.
#' 
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial_recursive <- function(n, k) {
    .Call(`_numberr_binomial_recursive`, n, k)
}

#' Calculates the binomial coefficient using the multiplicative equation.
#'
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @examples
#' binomial_multiplicative(5, 3)
#' binomial_multiplicative(4, 2)
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial_multiplicative <- function(n, k) {
    .Call(`_numberr_binomial_multiplicative`, n, k)
}

#' Calculates the binomial coefficient using the factorial method.
#' 
#' @param n Number of possibilities
#' @param k number of unordered outcomes
#' @return The binomial coefficient
#' @examples
#' binomial_factorial(4, 2)
#' @references Binomial coefficient. (2017, April 17). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Binomial_coefficient&oldid=775905810
#'    Binomial coefficients. Encyclopedia of Mathematics. From
#'   http://www.encyclopediaofmath.org/index.php?title=Binomial_coefficients&oldid=39155
#'    Weisstein, Eric W. "Binomial Coefficient." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/BinomialCoefficient.html
#' @export
binomial_factorial <- function(n, k) {
    .Call(`_numberr_binomial_factorial`, n, k)
}

#' Approximates Catalan's Constant, K.
#' 
#' @param k number of summations to perform, defaults to 10.
#' @return Approximated Catalan's Constant
#' @export
catalans_constant <- function(k = 10L) {
    .Call(`_numberr_catalans_constant`, k)
}

#' Computes the factors of an integer, should they exist, using the trial
#' division method.
#'
#' Integer factorization by trial division is the most inefficient algorithm for
#' decomposing a composite number. Trial division is the method of testing if
#' \eqn{n} is divisible by a smaller number, beginning with 2 and proceeding
#' upwards. This order is used to eliminate the need to test for multiples of 2
#' and 3. Also, the trial factors never need to go further than the square root
#' of \eqn{n}, \eqn{\sqrt{n}}, due to the fact that if \eqn{n} has a factor,
#' there exists a factor \eqn{f \leq \sqrt{n}}.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return Vector containing the factors of \eqn{n} should they exist. If
#'   \eqn{n} is prime, the returned list will only contain \eqn{n}.
#' @examples
#' factor_trial(9)
#' factor_trial(121)
#' @references Trial division. (2017, April 30). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Trial_division&oldid=778023614
#' @export
factor_trial <- function(n) {
    .Call(`_numberr_factor_trial`, n)
}

#' Computes the factorization of an integer \eqn{n} by Fermat's factorization
#' method.
#'
#' Fermat's factorization theorem redefines a composite number \eqn{n} as the
#' difference of squares: \deqn{n = a^2 - b^2} Which can also be written as:
#' \deqn{n = (a + b)(a - b)}
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return vector of length two containing factors of integers
#' @examples
#' fermat_factor(9)
#' fermat_factor(30)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
fermat_factor <- function(n) {
    .Call(`_numberr_fermat_factor`, n)
}

#' Implementation of Pollard's rho algorithm for factorizing an
#' integer \eqn{n} into two non-trivial prime numbers.
#'
#' @param n Integer to be factored into product of smaller integers.
#' @return Vector containing the two prime factors of \eqn{n}, should they exist.
#' @examples
#' pollardrho(9)
#' pollardrho(7799)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#'   Corvallis, OR: Department of Physics, Oregon State University. Fermat's
#'   factorization method. (2017, January 31). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Fermat%27s_factorization_method&oldid=763010603
#' @export
pollardrho <- function(n) {
    .Call(`_numberr_pollardrho`, n)
}

#' Function for calculating factorials using the standard approach as explained
#' below.
#'
#' Factorials are denoted for a positive integer \eqn{x} as \eqn{x!} and are
#' defined as: \deqn{x! = (x)(x - 1)(x - 2) \cdots (2)(1)} For example, the
#' factorial of 5 is written as: 5! = (5)(4)(3)(2)(1) = 120
#'
#' @param n Desired integer to compute factorial
#' @return the factorial, n!, of n
#' @examples
#' factorial(5)
#' factorial(10)
#' @references Press, W., Teukolsky, S., Vetterling, W., & Flannery, B. (2007).
#'   Numerical recipes (3rd ed.). Cambridge: Cambridge University Press.
#'   Weisstein, Eric W. "Factorial." From MathWorld--A Wolfram Web Resource.
#'   http://mathworld.wolfram.com/Factorial.html
#' @export
factorial <- function(n) {
    .Call(`_numberr_factorial`, n)
}

#' Approximates a factorial of an integer \eqn{n} using Stirling's
#' Approximation. Specifically, the approximation is done using a method
#' developed by Gosper.
#'
#' Stirling's approximation is a method of approximating a factorial \eqn{n!}.
#' As the value of \eqn{n} increases, the more exact the approximation becomes;
#' however, it still yields almost exact results for small values of \eqn{n}.
#' The approximation used is given by Gosper, which is noted to be a better
#' approximation to \eqn{n!} and also results in a very close approximation to
#' \eqn{0! = 1}. \deqn{n! \approx \sqrt{(2n + \frac{1}{3})\pi} n^n e^{-n}}
#'
#' @param n desired integer to approximate factorial
#' @return the approximated factorial, n! per Gosper's approximation
#' @examples
#' stirling(5)
#' stirling(10)
#' @references Stirling's approximation. (2017, March 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
#'    Weisstein, Eric W. "Stirling's Approximation." From MathWorld--A Wolfram
#'   Web Resource. http://mathworld.wolfram.com/StirlingsApproximation.html
#' @export
stirling <- function(n) {
    .Call(`_numberr_stirling`, n)
}

#' Approximates the factorial of n using the approximation given by Ramanujan
#' in his lost notebook (Ramanujan 1988, as cited in Wikipedia). Computing the
#' factorial in logarithmic form is useful as it helps avoid overflow when n is
#' large. As values of n increase, the approximation given becomes more exact.
#'
#' It is often useful to compute the logarithmic form of the factorial and
#' convert it to exponent form to avoid overflow. The approximation is an
#' alternative approach given by Srinivasa Ramanujan (Ramanujan 1988). \deqn{ln
#' n! \approx n ln n - n + \frac{1}{6} ln(n(1 + 4n(1 + 2n))) + \frac{1}{2} ln
#' \pi}
#'
#' @param n desired integer to approximate factorial
#' @return the natural log of the approximated factorial per Stirling's approximation.
#' @examples
#' stirlingln(10)
#' stirlingln(15)
#' @references Stirling's approximation. (2017, March 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Stirling%27s_approximation&oldid=769328178
#' @export
stirlingln <- function(n) {
    .Call(`_numberr_stirlingln`, n)
}

#' Approximates the factorial :math:`n!` given an integer :math:`n` using
#' Ramanujan's formula. Ramanujan's formula is just as or more accurate than
#' several other factorial approximation formulas.
#'
#' Ramanujan's formula is another factorial approximation method known for its
#' accuracy in comparison to other factorial approximation approaches including
#' Stirling's and Gosper's approximations. Ramanujan's formula is defined as:
#' \deqn{n! \approx \sqrt{\pi} \left(\frac{n}{e}\right)^n \sqrt[6]{8n^3 + 4n^2
#' + n + \frac{1}{30}}}
#'
#' @param n integer to approximate factorial
#' @return the approximated factorial, n!, as per Ramanujan's approximation.
#' @examples
#' ramanujan(10)
#' ramanujan(5)
#' @references Mortici, Cristinel. On Gosper's Formula for the Gamma Function.
#'   Valahia University of Targoviste, Department of Mathematics. Retrieved
#'   from http://files.ele-math.com/articles/jmi-05-53.pdf
#' @export
ramanujan <- function(n) {
    .Call(`_numberr_ramanujan`, n)
}

#' Computes the falling factorial.
#'
#' The falling factorial, denoted as
#' \eqn{(x)_{n}} (or \eqn{x^{\underline{n}}}) is defined as the following:
#' \deqn{(x)_n = x(x - 1) \cdots (x - (n - 1))} The first few falling
#' factorials are then: \deqn{(x)_0 = 1} \deqn{(x)_1 = x} \deqn{(x)_2 = x(x -
#' 1)} \deqn{(x)_3 = x(x - 1)(x - 2)} \deqn{(x)_4 = x(x - 1)(x - 2)(x - 3)}
#'
#' @param x integer
#' @param n integer
#' @return Computed falling factorial
#' @examples
#' fallingfactorial(5, 3)
#' fallingfactorial(10, 6)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'    Weisstein, Eric W. "Falling Factorial." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/FallingFactorial.html
#' @export
fallingfactorial <- function(x, n) {
    .Call(`_numberr_fallingfactorial`, x, n)
}

#' Computes the falling factorial function as a string.
#'
#' The falling factorial, denoted as
#' \eqn{(x)_{n}} (or \eqn{x^{\underline{n}}}) is defined as the following:
#' \deqn{(x)_n = x(x - 1) \cdots (x - (n - 1))} The first few falling
#' factorials are then: \deqn{(x)_0 = 1} \deqn{(x)_1 = x} \deqn{(x)_2 = x(x -
#' 1)} \deqn{(x)_3 = x(x - 1)(x - 2)} \deqn{(x)_4 = x(x - 1)(x - 2)(x - 3)}
#'
#' @param x integer
#' @param n integer
#' @return string representation of falling factorial function.
#' @examples
#' fallingfactorial_function('x', 5)
#' fallingfactorial_function('a', 3)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'    Weisstein, Eric W. "Falling Factorial." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/FallingFactorial.html
#' @export
fallingfactorial_function <- function(x, n) {
    .Call(`_numberr_fallingfactorial_function`, x, n)
}

#' Computes the rising factorial. Also known as the Pochhammer symbol.
#'
#' The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
#' \rangle_n}) is also known as the Pochhammer symbol in other areas of
#' mathematics. The rising factorial is related to the gamma function
#' \eqn{\Gamma (z)}. \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}}
#' where \eqn{x^(0) = 1}. The rising factorial is related to the falling
#' factorial by: \deqn{x^{(n)} = (-x)_n (-1)^n}
#'
#' @param x integer or character
#' @param n integer
#' @return Computed rising factorial
#' @examples
#' risingfactorial(5, 3)
#' risingfactorial(10, 6)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'    Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/RisingFactorial.html
#' @export
risingfactorial <- function(x, n) {
    .Call(`_numberr_risingfactorial`, x, n)
}

#' Computes the rising factorial, also known as the Pochhammer symbol as a function string.
#' 
#' The rising factorial, \eqn{x^{(n)}} (sometimes denoted \eqn{\langle x
#' \rangle_n}) is also known as the Pochhammer symbol in other areas of
#' mathematics. The rising factorial is related to the gamma function
#' \eqn{\Gamma (z)}. \deqn{x^{(n)} \equiv \frac{\Gamma (x + n)}{\Gamma (n)}}
#' where \eqn{x^(0) = 1}. The rising factorial is related to the falling
#' factorial by: \deqn{x^{(n)} = (-x)_n (-1)^n}
#'
#' @param x integer or character
#' @param n integer
#' @return string representation of rising factorial function.
#' @examples
#' risingfactorial_function('x', 3)
#' risingfactorial_function('a', 2)
#' @references Falling and rising factorials. (2017, June 8). In Wikipedia, The
#'   Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Falling_and_rising_factorials&oldid=784512036
#'    Weisstein, Eric W. "Rising Factorial." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/RisingFactorial.html
#' @export
risingfactorial_function <- function(x, n) {
    .Call(`_numberr_risingfactorial_function`, x, n)
}

#' Computes the greatest common divisor with several algorithms available. The
#' default algorithm is the recursive method, which is typically faster than
#' the others.
#'
#' @param a First integer
#' @param b Second integer
#' @param method Specifies the algorithm used to calculate the greatest common
#'   divisior. Defaults to 'recursive', which is generally faster than other
#'   methods. Other algorithms available include 'division' and 'subtraction'.
#' @return The greatest common divisor
#' @examples
#' gcd(21, 28)
#' gcd(30, 10, 'subtraction')
#' gcd(21, 6, 'division')
#' @export
gcd <- function(a, b, method = "recursive") {
    .Call(`_numberr_gcd`, a, b, method)
}

#' Calculates the Greatest Common Divisor of two integers using the recursive
#' Euclidean algorithm.
#'
#' The recursive implementation of the greatest common divisor algorithm was
#' described in the Elements of Euclid but may even predate that.
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd_recursive(21, 6)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#'   Introduction to algorithms (3rd ed., pp. 928-930, 934-935). Cambridge
#'   (Inglaterra): Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia,
#'   The Free Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
#' @export
gcd_recursive <- function(a, b) {
    .Call(`_numberr_gcd_recursive`, a, b)
}

#' Calculates the Greatest Common Divisor using the Euclidean division
#' algorithm.
#'
#' The Euclidean division implementation of the greatest common divisor
#' algorithm computes a quotient \eqn{q_k} and a remainder \eqn{r_k} at each
#' step \eqn{k} from the two numbers \eqn{a} and \eqn{b}. The quotient component
#' of Euclidean division is not used in the algorithm, thus only modulo
#' operations are required as that only returns the remainder.
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd_division(30, 15)
#' gcd_division(24, 8)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#'   Introduction to algorithms (3rd ed., pp. 928-930). Cambridge (Inglaterra):
#'   Mit Press. Euclidean algorithm. (2017, May 18). In Wikipedia, The Free
#'   Encyclopedia. From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_algorithm&oldid=780973502
#'    Euclidean division. (2017, May 10). In Wikipedia, The Free Encyclopedia.
#'   From
#'   https://en.wikipedia.org/w/index.php?title=Euclidean_division&oldid=779699188
#' @export
gcd_division <- function(a, b) {
    .Call(`_numberr_gcd_division`, a, b)
}

#' Computes the Greatest Common Divisor of two integers using the Euclidean subtraction algorithm.
#'
#' Computes the greatest common divisor using the original implementation of the algorithm by
#' Euclid. In this version of the algorithm, the quotient \eqn{q_k} and remainder \eqn{r_k}
#' is calculated by repeated division by subtraction. Therefore, in this implementation of the
#' greatest common divisor algorithm, the modulo operation in the division implementation is
#' replaced by division by repeated subtraction.
#'
#' @param a First integer
#' @param b Second integer
#' @return The greatest common divisor
#' @examples
#' gcd_subtraction(21, 6)
#' gcd_subtraction(25, 5)
#' @export
gcd_subtraction <- function(a, b) {
    .Call(`_numberr_gcd_subtraction`, a, b)
}

#' Implementation of the extended form of the Euclidean algorithm which computes
#' the greatest common divisor \eqn{d} and integers \eqn{x} and \eqn{y} such
#' that \eqn{ax + by = d}.
#'
#' The extended Euclidean algorithm computes the greatest common divisor,
#' \eqn{d} of two integers \eqn{a} and \eqn{b} as well as the coefficients
#' \eqn{x} and \eqn{y} such that: \deqn{d = gcd(a, b) = ax + by} The
#' coefficients \eqn{x} and \eqn{y} are known as Bezout's coefficients and can
#' be zero or negative.
#'
#' @param a First integer
#' @param b Second integer
#' @return vector containing coefficients (d, x, y)
#' @examples
#' gcd_extended(99, 78)
#' gcd_extended(55, 45)
#' @references Bezout's identity. (2017, May 12). In Wikipedia, The Free
#' Encyclopedia. From
#' https://en.wikipedia.org/w/index.php?title=B%C3%A9zout%27s_identity&oldid=780050687
#' Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009). Introduction to
#' algorithms (3rd ed., pp. 937-938). Cambridge (Inglaterra): Mit Press.
#' @export
gcd_extended <- function(a, b) {
    .Call(`_numberr_gcd_extended`, a, b)
}

#' Tests whether a given value \eqn{n} is composite. Essentially the opposite of
#' the isprime() function.
#'
#' A composite number is defined as a positive integer :math:`n` that has a
#' factor than 1 and itself. In short, a composite number is not prime.
#'
#' @param n Value to test
#' @return TRUE if n is composite, FALSE otherwise
#' @examples
#' iscomposite(5)
#' iscomposite(11)
#' @references Weisstein, Eric W. "Composite Number." From MathWorld--A Wolfram
#' Web Resource. http://mathworld.wolfram.com/CompositeNumber.html
#' @export
iscomposite <- function(n) {
    .Call(`_numberr_iscomposite`, n)
}

#' Tests if two integers are coprime.
#'
#' Two integers \eqn{a} and \eqn{b} are said to be relatively prime (also called
#' relatively prime) if they share no positive divisors except 1.
#'
#' @param a First integer
#' @param b Second integer
#' @return TRUE if given integers are coprime, FALSE otherwise
#' @examples
#' iscoprime(2, 3)
#' iscoprime(2, 4)
#' @references Cormen, T., Leiserson, C., Rivest, R., & Stein, C. (2009).
#' Introduction to algorithms (3rd ed., pp. 931). Cambridge (Inglaterra): Mit
#' Press. Weisstein, Eric W. "Relatively Prime." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/RelativelyPrime.html
#' @export
iscoprime <- function(a, b) {
    .Call(`_numberr_iscoprime`, a, b)
}

#' Tests if a given value \eqn{n} is even or not.
#'
#' An even number is defined as an integer with the form \eqn{n = 2k} where
#' \eqn{k} is also an integer. Put differently, an even number is not odd and is
#' thus evenly divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is even, FALSE otherwise
#' @examples
#' iseven(4)
#' iseven(5)
#' iseven(5.25)
#' @references Weisstein, Eric W. "Even Number." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/EvenNumber.html
#' @export
iseven <- function(n) {
    .Call(`_numberr_iseven`, n)
}

#' Tests whether a given given value n is odd.
#'
#' An odd number is an integer that has the form \eqn{n = 2k + 1} for an integer
#' \eqn{k}. In other words, an odd number is an integer that is not evenly
#' divisible by 2.
#'
#' @param n Value to test
#' @return TRUE if n is odd, FALSE otherwise
#' @examples
#' isodd(3)
#' isodd(4)
#' isodd(3.2)
#' @references Weisstein, Eric W. "Odd Number." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/OddNumber.html
#' @export
isodd <- function(n) {
    .Call(`_numberr_isodd`, n)
}

#' Tests if a given integer is a square number.
#'
#' A square number is an integer that is the square of an integer.
#'
#' @param n Value to test
#' @return TRUE if value is a square number, FALSE otherwise
#' @examples
#' issquare(25)
#' issquare(24)
#' @references Barnes, C. (2004). Integer Factorization Algorithms (1st ed.).
#' Corvallis, OR: Department of Physics, Oregon State University.
#' @export
issquare <- function(n) {
    .Call(`_numberr_issquare`, n)
}

#' Computes the least common multiple of two integers, a and b.
#' 
#' The least common multiple is defined as the smallest possible positive integer that 
#' is divisible by both \eqn{a} and \eqn{b}, and is usually denoted \eqn{lcm(a,b)} or 
#' \eqn{LCM(a,b)}. The function implementation for finding the least common multiple takes advantage 
#' of the relation between the greatest common divisor and the least common multiple, such that:
#' \deqn{lcm(a,b) = \bigg(\frac{|a|}{gcd(a,b)} \bigg) \space |b|}
#' @param a First integer
#' @param b Second integer
#' @examples
#' lcm(21, 6)
#' lcm(15, 3)
#' @return the least common multiple of the two given integers
lcm <- function(a, b) {
    .Call(`_numberr_lcm`, a, b)
}

#' Computes large modular exponents with modular exponentiation.
#' 
#' @param a the base integer, as in a^n mod m
#' @param n the exponent power
#' @param m the modulus
#' @return the computed exponent mod m
#' @export
mod_expo <- function(a, n, m) {
    .Call(`_numberr_mod_expo`, a, n, m)
}

#' Tests whether a given value n is prime with a naive test.
#'
#' A prime number is defined as a positive integer, \eqn{n > 1} that has no
#' positive divisors other than 1 and itself.
#'
#' @param n Value to test
#' @return TRUE if n is prime, FALSE otherwise
#' @examples
#' isprime(9)
#' isprime(11)
#' @references Weisstein, Eric W. "Prime Number." From MathWorld--A Wolfram Web
#' Resource. http://mathworld.wolfram.com/PrimeNumber.html
#' @export
isprime <- function(n) {
    .Call(`_numberr_isprime`, n)
}

#' Tests if an integer is (probably) prime using the Fermat primality test.
#'
#' Fermat's primality test is a probabilistic method (there is a chance, albeit
#' very small, that a composite number will be flagged as prime) for
#' identifying prime numbers. The test is based on Fermat's Little Theorem,
#' which states that if \eqn{p} is prime and \eqn{a_{p-1}} is not divisible by
#' \eqn{p}, then:
#'
#' \deqn{a^{p-1} \equiv 1 \space (text{mod} \space p)}
#'
#' The test proceeds as follows: Select a value for \eqn{a} at random that is
#' not divisible by \eqn{p} and check if the equality holds. This test is
#' performed \eqn{k} times and if the equality does not hold, the integer
#' \eqn{p} is composite. It is possible the test will falsely identify a
#' composite number as prime.
#'
#' @param n integer
#' @param k integer, default 1000
#' @return TRUE if n is probably prime, FALSE otherwise
#' @examples
#' fermat_prime(11)
#' fermat_prime(221)
#' @references Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,
#' Clifford Stein (2001). "Section 31.8: Primality testing". Introduction to
#' Algorithms (Second ed.). MIT Press; McGraw-Hill. Weisstein, Eric W.
#' "Fermat's Little Theorem." From MathWorld--A Wolfram Web Resource.
#' http://mathworld.wolfram.com/FermatsLittleTheorem.html Weisstein, Eric W.
#' "Primality Test." From MathWorld--A Wolfram Web Resource.
#' http://mathworld.wolfram.com/PrimalityTest.html
#' @export
fermat_prime <- function(n, k = 1000L) {
    .Call(`_numberr_fermat_prime`, n, k)
}

#' Performs the Lucas-Lehmer primality test for determining if a Mersenne
#' number is prime.
#'
#' @param p integer
#' @return TRUE if integer is prime (and a Mersenne Number), FALSE otherwise
#' @references Weisstein, Eric W. "Lucas-Lehmer Test." From MathWorld--A
#'   Wolfram Web Resource. 
#'   http://mathworld.wolfram.com/Lucas-LehmerTest.html
#'   
#'   Weisstein, Eric W. "Mersenne Number." From MathWorld--A Wolfram Web
#'   Resource. 
#'   http://mathworld.wolfram.com/MersenneNumber.html
#'   
#'   Weisstein, Eric W. "Primality Test." From MathWorld--A Wolfram Web Resource.
#'   http://mathworld.wolfram.com/PrimalityTest.html
#' @export
lucas_lehmer <- function(p) {
    .Call(`_numberr_lucas_lehmer`, p)
}

#' Returns the Catalan numbers up to n.
#'
#' The Catalan numbers are a sequence of natural numbers, typically denoted
#' \eqn{C_n} where \eqn{n} is the \eqn{n^{th}} Catalan number. The solution to
#' Euler's Polygon Division Problem, which is the problem of finding the number
#' of triangles that can be divided from a polygon of \eqn{n} segments, where
#' the number of triangles is \eqn{E_n}, is the Catalan number \eqn{C_{n-2}}.
#' The first few Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, ... The
#' function is implemented using the recurrence relation of \eqn{C_n}:
#' \deqn{C_{n+1} = \frac{2(2n + 1)}{n + 2} C_n}
#'
#' @param n Specify the length of the returned Catalan number sequence.
#' @return vector of n length
#' @examples
#' catalan(5)
#' @references Catalan number. (2018, January 18). In Wikipedia, The Free
#'   Encyclopedia. Retrieved 14:03, January 27, 2018, from
#'   https://en.wikipedia.org/w/index.php?title=Catalan_number&oldid=821121794
#'   Weisstein, Eric W. "Euler's Polygon Division Problem." From MathWorld--A
#'   Wolfram Web Resource.
#'   http://mathworld.wolfram.com/EulersPolygonDivisionProblem.html Stanley,
#'   Richard and Weisstein, Eric W. "Catalan Number." From MathWorld--A Wolfram
#'   Web Resource. http://mathworld.wolfram.com/CatalanNumber.html
#' @export
catalan <- function(n) {
    .Call(`_numberr_catalan`, n)
}

#' Returns the Cullen number integer sequence up to a given value of n.
#'
#' Cullen numbers are a special case of Proth numbers that have the form:
#' \deqn{C_n = 2^n n + 1} The first few Cullen numbers are 3, 9, 25, 65, 161, ...
#'
#' @param n Specifies the length of the Cullen number sequence to return
#' @return vector of length n
#' @examples
#' cullen(5)
#' @references Cullen number. (2018, January 22). In Wikipedia, The Free
#'   Encyclopedia. Retrieved 14:17, January 27, 2018, from
#'   https://en.wikipedia.org/w/index.php?title=Cullen_number&oldid=821774732
#'   Weisstein, Eric W. "Cullen Number." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/CullenNumber.html
#' @export
cullen <- function(n) {
    .Call(`_numberr_cullen`, n)
}

#' Returns the super-Catalan number sequence up to the given value of n.
#'
#' The super-Catalan numbers, also known as the Schroeder-Hipparchus numbers,
#' or little Schroeder numbers, count the number of lattice paths (path
#' composed of a connected horizontal and vertical line segment) with diagonal
#' steps from \eqn{n, n} to \eqn{0, 0} without crossing the diagonal line. The
#' super-Catalan numbers are given by the recurrence relation: \deqn{S(n) =
#' \frac{3(2n - 3) \space S(n-1) - (n-3) \space S(n-2)}{n}}
#'
#' @param n Specifies the length of the returned super-Catalan number sequence
#' @return vector of length n
#' @examples
#' supercatalan(5)
#' @references Weisstein, Eric W. "Lattice Path." From MathWorld--A Wolfram Web
#'   Resource. http://mathworld.wolfram.com/LatticePath.html Weisstein, Eric W.
#'   "Super Catalan Number." From MathWorld--A Wolfram Web Resource.
#'   http://mathworld.wolfram.com/SuperCatalanNumber.html
#' @export
supercatalan <- function(n) {
    .Call(`_numberr_supercatalan`, n)
}

#' Computes the Fibonacci sequence up to given value of n.
#'
#' The Fibonacci sequence is defined by a recurrence relation where \eqn{f_n}
#' denotes the series up to \eqn{n} points. \deqn{f_n = f_{n-1} + f_{n-2}}
#' With initial coniditions: \deqn{f_1 = 1, \qquad f_2 = 2}
#' @param n Integer designating the stopping point of the Fibonacci sequence
#' @return array of the Fibonacci sequence up to \eqn{n}.
#' @examples
#' fibonacci(5)
#' @references Moler, C. (2011). Numerical computing with MATLAB (1st ed.).
#' Philadelphia, Pa: Society for Industrial & Applied Mathematics.
#' @export
fibonacci <- function(n) {
    .Call(`_numberr_fibonacci`, n)
}

#' Computes the famous \eqn{3n + 1} sequence, also known as the Collatz
#' conjecture.
#'
#' The Collatz conjecture, also known as the \eqn{3n + 1} problem, is a
#' currently unsolved problem in number theory that is stated as: Start with a
#' positive integer \eqn{n} If \eqn{n} is even, divide \eqn{n} by 2 If \eqn{n}
#' is odd, multiply by 3 and add 1 to obtain \eqn{3n + 1} Repeat this process
#' until the sequence reaches 1. It is unknown if there is a starting integer
#' \eqn{n} that does not result in the sequence ending with 1.
#'
#' @param n Starting integer to begin \eqn{3n + 1} process
#' @return vector containing sequence generated by the Collatz conjecture. If n
#'   is 1, 1 is returned.
#' @examples
#' three_n_one(5)
#' @references 3x + 1 problem. (2017, May 13). In Wikipedia, The Free
#' Encyclopedia. from
#' https://en.wikipedia.org/wiki/Collatz_conjecture
#' Moler, C. (2011). Numerical computing with MATLAB (1st ed.). Philadelphia,
#' Pa: Society for Industrial & Applied Mathematics.
#' @export
collatz <- function(n) {
    .Call(`_numberr_collatz`, n)
}

