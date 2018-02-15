// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// binomial_coefficient
long int binomial_coefficient(int n, int k, std::string method);
RcppExport SEXP _numberr_binomial_coefficient(SEXP nSEXP, SEXP kSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_coefficient(n, k, method));
    return rcpp_result_gen;
END_RCPP
}
// binomial_recursive
long int binomial_recursive(int n, int k);
RcppExport SEXP _numberr_binomial_recursive(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_recursive(n, k));
    return rcpp_result_gen;
END_RCPP
}
// binomial_multiplicative
long int binomial_multiplicative(int n, int k);
RcppExport SEXP _numberr_binomial_multiplicative(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_multiplicative(n, k));
    return rcpp_result_gen;
END_RCPP
}
// binomial_factorial
long int binomial_factorial(int n, int k);
RcppExport SEXP _numberr_binomial_factorial(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_factorial(n, k));
    return rcpp_result_gen;
END_RCPP
}
// catalans_constant
double catalans_constant(int k);
RcppExport SEXP _numberr_catalans_constant(SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(catalans_constant(k));
    return rcpp_result_gen;
END_RCPP
}
// factor_trial
NumericVector factor_trial(int n);
RcppExport SEXP _numberr_factor_trial(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(factor_trial(n));
    return rcpp_result_gen;
END_RCPP
}
// fermat_factor
NumericVector fermat_factor(int n);
RcppExport SEXP _numberr_fermat_factor(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fermat_factor(n));
    return rcpp_result_gen;
END_RCPP
}
// pollardrho
NumericVector pollardrho(int n);
RcppExport SEXP _numberr_pollardrho(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(pollardrho(n));
    return rcpp_result_gen;
END_RCPP
}
// factorial
long int factorial(int n);
RcppExport SEXP _numberr_factorial(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(factorial(n));
    return rcpp_result_gen;
END_RCPP
}
// stirling
float stirling(int n);
RcppExport SEXP _numberr_stirling(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(stirling(n));
    return rcpp_result_gen;
END_RCPP
}
// stirlingln
float stirlingln(int n);
RcppExport SEXP _numberr_stirlingln(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(stirlingln(n));
    return rcpp_result_gen;
END_RCPP
}
// ramanujan
float ramanujan(int n);
RcppExport SEXP _numberr_ramanujan(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(ramanujan(n));
    return rcpp_result_gen;
END_RCPP
}
// fallingfactorial
float fallingfactorial(int x, int n);
RcppExport SEXP _numberr_fallingfactorial(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fallingfactorial(x, n));
    return rcpp_result_gen;
END_RCPP
}
// fallingfactorial_function
std::string fallingfactorial_function(std::string x, int n);
RcppExport SEXP _numberr_fallingfactorial_function(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fallingfactorial_function(x, n));
    return rcpp_result_gen;
END_RCPP
}
// risingfactorial
float risingfactorial(int x, int n);
RcppExport SEXP _numberr_risingfactorial(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(risingfactorial(x, n));
    return rcpp_result_gen;
END_RCPP
}
// risingfactorial_function
std::string risingfactorial_function(std::string x, int n);
RcppExport SEXP _numberr_risingfactorial_function(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(risingfactorial_function(x, n));
    return rcpp_result_gen;
END_RCPP
}
// gcd
long int gcd(int a, int b, std::string method);
RcppExport SEXP _numberr_gcd(SEXP aSEXP, SEXP bSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(gcd(a, b, method));
    return rcpp_result_gen;
END_RCPP
}
// gcd_recursive
long int gcd_recursive(int a, int b);
RcppExport SEXP _numberr_gcd_recursive(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gcd_recursive(a, b));
    return rcpp_result_gen;
END_RCPP
}
// gcd_division
long int gcd_division(int a, int b);
RcppExport SEXP _numberr_gcd_division(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gcd_division(a, b));
    return rcpp_result_gen;
END_RCPP
}
// gcd_subtraction
long int gcd_subtraction(int a, int b);
RcppExport SEXP _numberr_gcd_subtraction(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gcd_subtraction(a, b));
    return rcpp_result_gen;
END_RCPP
}
// gcd_extended
NumericVector gcd_extended(int a, int b);
RcppExport SEXP _numberr_gcd_extended(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gcd_extended(a, b));
    return rcpp_result_gen;
END_RCPP
}
// iscomposite
bool iscomposite(int n);
RcppExport SEXP _numberr_iscomposite(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(iscomposite(n));
    return rcpp_result_gen;
END_RCPP
}
// iscoprime
bool iscoprime(int a, int b);
RcppExport SEXP _numberr_iscoprime(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(iscoprime(a, b));
    return rcpp_result_gen;
END_RCPP
}
// iseven
bool iseven(float n);
RcppExport SEXP _numberr_iseven(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(iseven(n));
    return rcpp_result_gen;
END_RCPP
}
// isodd
bool isodd(float n);
RcppExport SEXP _numberr_isodd(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(isodd(n));
    return rcpp_result_gen;
END_RCPP
}
// issquare
bool issquare(float n);
RcppExport SEXP _numberr_issquare(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(issquare(n));
    return rcpp_result_gen;
END_RCPP
}
// lcm
long int lcm(int a, int b);
RcppExport SEXP _numberr_lcm(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(lcm(a, b));
    return rcpp_result_gen;
END_RCPP
}
// mod_expo
int mod_expo(int a, unsigned int n, int m);
RcppExport SEXP _numberr_mod_expo(SEXP aSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(mod_expo(a, n, m));
    return rcpp_result_gen;
END_RCPP
}
// isprime
bool isprime(int n);
RcppExport SEXP _numberr_isprime(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(isprime(n));
    return rcpp_result_gen;
END_RCPP
}
// fermat_prime
bool fermat_prime(unsigned int n, int k);
RcppExport SEXP _numberr_fermat_prime(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(fermat_prime(n, k));
    return rcpp_result_gen;
END_RCPP
}
// lucas_lehmer
bool lucas_lehmer(int p);
RcppExport SEXP _numberr_lucas_lehmer(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(lucas_lehmer(p));
    return rcpp_result_gen;
END_RCPP
}
// catalan
NumericVector catalan(int n);
RcppExport SEXP _numberr_catalan(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(catalan(n));
    return rcpp_result_gen;
END_RCPP
}
// cullen
NumericVector cullen(int n);
RcppExport SEXP _numberr_cullen(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(cullen(n));
    return rcpp_result_gen;
END_RCPP
}
// supercatalan
NumericVector supercatalan(int n);
RcppExport SEXP _numberr_supercatalan(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(supercatalan(n));
    return rcpp_result_gen;
END_RCPP
}
// fibonacci
NumericVector fibonacci(int n);
RcppExport SEXP _numberr_fibonacci(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fibonacci(n));
    return rcpp_result_gen;
END_RCPP
}
// collatz
NumericVector collatz(int n);
RcppExport SEXP _numberr_collatz(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(collatz(n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_numberr_binomial_coefficient", (DL_FUNC) &_numberr_binomial_coefficient, 3},
    {"_numberr_binomial_recursive", (DL_FUNC) &_numberr_binomial_recursive, 2},
    {"_numberr_binomial_multiplicative", (DL_FUNC) &_numberr_binomial_multiplicative, 2},
    {"_numberr_binomial_factorial", (DL_FUNC) &_numberr_binomial_factorial, 2},
    {"_numberr_catalans_constant", (DL_FUNC) &_numberr_catalans_constant, 1},
    {"_numberr_factor_trial", (DL_FUNC) &_numberr_factor_trial, 1},
    {"_numberr_fermat_factor", (DL_FUNC) &_numberr_fermat_factor, 1},
    {"_numberr_pollardrho", (DL_FUNC) &_numberr_pollardrho, 1},
    {"_numberr_factorial", (DL_FUNC) &_numberr_factorial, 1},
    {"_numberr_stirling", (DL_FUNC) &_numberr_stirling, 1},
    {"_numberr_stirlingln", (DL_FUNC) &_numberr_stirlingln, 1},
    {"_numberr_ramanujan", (DL_FUNC) &_numberr_ramanujan, 1},
    {"_numberr_fallingfactorial", (DL_FUNC) &_numberr_fallingfactorial, 2},
    {"_numberr_fallingfactorial_function", (DL_FUNC) &_numberr_fallingfactorial_function, 2},
    {"_numberr_risingfactorial", (DL_FUNC) &_numberr_risingfactorial, 2},
    {"_numberr_risingfactorial_function", (DL_FUNC) &_numberr_risingfactorial_function, 2},
    {"_numberr_gcd", (DL_FUNC) &_numberr_gcd, 3},
    {"_numberr_gcd_recursive", (DL_FUNC) &_numberr_gcd_recursive, 2},
    {"_numberr_gcd_division", (DL_FUNC) &_numberr_gcd_division, 2},
    {"_numberr_gcd_subtraction", (DL_FUNC) &_numberr_gcd_subtraction, 2},
    {"_numberr_gcd_extended", (DL_FUNC) &_numberr_gcd_extended, 2},
    {"_numberr_iscomposite", (DL_FUNC) &_numberr_iscomposite, 1},
    {"_numberr_iscoprime", (DL_FUNC) &_numberr_iscoprime, 2},
    {"_numberr_iseven", (DL_FUNC) &_numberr_iseven, 1},
    {"_numberr_isodd", (DL_FUNC) &_numberr_isodd, 1},
    {"_numberr_issquare", (DL_FUNC) &_numberr_issquare, 1},
    {"_numberr_lcm", (DL_FUNC) &_numberr_lcm, 2},
    {"_numberr_mod_expo", (DL_FUNC) &_numberr_mod_expo, 3},
    {"_numberr_isprime", (DL_FUNC) &_numberr_isprime, 1},
    {"_numberr_fermat_prime", (DL_FUNC) &_numberr_fermat_prime, 2},
    {"_numberr_lucas_lehmer", (DL_FUNC) &_numberr_lucas_lehmer, 1},
    {"_numberr_catalan", (DL_FUNC) &_numberr_catalan, 1},
    {"_numberr_cullen", (DL_FUNC) &_numberr_cullen, 1},
    {"_numberr_supercatalan", (DL_FUNC) &_numberr_supercatalan, 1},
    {"_numberr_fibonacci", (DL_FUNC) &_numberr_fibonacci, 1},
    {"_numberr_collatz", (DL_FUNC) &_numberr_collatz, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_numberr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
