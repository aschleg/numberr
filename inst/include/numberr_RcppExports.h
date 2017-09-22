// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_numberr_RCPPEXPORTS_H_GEN_
#define RCPP_numberr_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace numberr {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("numberr", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("numberr", "_numberr_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in numberr");
            }
        }
    }

    inline int binomial_recursive(int n, int k) {
        typedef SEXP(*Ptr_binomial_recursive)(SEXP,SEXP);
        static Ptr_binomial_recursive p_binomial_recursive = NULL;
        if (p_binomial_recursive == NULL) {
            validateSignature("int(*binomial_recursive)(int,int)");
            p_binomial_recursive = (Ptr_binomial_recursive)R_GetCCallable("numberr", "_numberr_binomial_recursive");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_binomial_recursive(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline int binomial_multiplicative(int n, int k) {
        typedef SEXP(*Ptr_binomial_multiplicative)(SEXP,SEXP);
        static Ptr_binomial_multiplicative p_binomial_multiplicative = NULL;
        if (p_binomial_multiplicative == NULL) {
            validateSignature("int(*binomial_multiplicative)(int,int)");
            p_binomial_multiplicative = (Ptr_binomial_multiplicative)R_GetCCallable("numberr", "_numberr_binomial_multiplicative");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_binomial_multiplicative(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline int binomial_factorial(int n, int k) {
        typedef SEXP(*Ptr_binomial_factorial)(SEXP,SEXP);
        static Ptr_binomial_factorial p_binomial_factorial = NULL;
        if (p_binomial_factorial == NULL) {
            validateSignature("int(*binomial_factorial)(int,int)");
            p_binomial_factorial = (Ptr_binomial_factorial)R_GetCCallable("numberr", "_numberr_binomial_factorial");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_binomial_factorial(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(k)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline NumericVector factor_trial(unsigned int n) {
        typedef SEXP(*Ptr_factor_trial)(SEXP);
        static Ptr_factor_trial p_factor_trial = NULL;
        if (p_factor_trial == NULL) {
            validateSignature("NumericVector(*factor_trial)(unsigned int)");
            p_factor_trial = (Ptr_factor_trial)R_GetCCallable("numberr", "_numberr_factor_trial");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_factor_trial(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector fermat(unsigned int n) {
        typedef SEXP(*Ptr_fermat)(SEXP);
        static Ptr_fermat p_fermat = NULL;
        if (p_fermat == NULL) {
            validateSignature("NumericVector(*fermat)(unsigned int)");
            p_fermat = (Ptr_fermat)R_GetCCallable("numberr", "_numberr_fermat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fermat(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector pollardrho(unsigned long int n) {
        typedef SEXP(*Ptr_pollardrho)(SEXP);
        static Ptr_pollardrho p_pollardrho = NULL;
        if (p_pollardrho == NULL) {
            validateSignature("NumericVector(*pollardrho)(unsigned long int)");
            p_pollardrho = (Ptr_pollardrho)R_GetCCallable("numberr", "_numberr_pollardrho");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pollardrho(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline double factorial(int n) {
        typedef SEXP(*Ptr_factorial)(SEXP);
        static Ptr_factorial p_factorial = NULL;
        if (p_factorial == NULL) {
            validateSignature("double(*factorial)(int)");
            p_factorial = (Ptr_factorial)R_GetCCallable("numberr", "_numberr_factorial");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_factorial(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double stirling(int n) {
        typedef SEXP(*Ptr_stirling)(SEXP);
        static Ptr_stirling p_stirling = NULL;
        if (p_stirling == NULL) {
            validateSignature("double(*stirling)(int)");
            p_stirling = (Ptr_stirling)R_GetCCallable("numberr", "_numberr_stirling");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stirling(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double stirlingln(int n) {
        typedef SEXP(*Ptr_stirlingln)(SEXP);
        static Ptr_stirlingln p_stirlingln = NULL;
        if (p_stirlingln == NULL) {
            validateSignature("double(*stirlingln)(int)");
            p_stirlingln = (Ptr_stirlingln)R_GetCCallable("numberr", "_numberr_stirlingln");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_stirlingln(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double ramanujan(int n) {
        typedef SEXP(*Ptr_ramanujan)(SEXP);
        static Ptr_ramanujan p_ramanujan = NULL;
        if (p_ramanujan == NULL) {
            validateSignature("double(*ramanujan)(int)");
            p_ramanujan = (Ptr_ramanujan)R_GetCCallable("numberr", "_numberr_ramanujan");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ramanujan(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double fallingfactorial(int x, int n) {
        typedef SEXP(*Ptr_fallingfactorial)(SEXP,SEXP);
        static Ptr_fallingfactorial p_fallingfactorial = NULL;
        if (p_fallingfactorial == NULL) {
            validateSignature("double(*fallingfactorial)(int,int)");
            p_fallingfactorial = (Ptr_fallingfactorial)R_GetCCallable("numberr", "_numberr_fallingfactorial");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fallingfactorial(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::string fallingfactorial_function(std::string x, int n) {
        typedef SEXP(*Ptr_fallingfactorial_function)(SEXP,SEXP);
        static Ptr_fallingfactorial_function p_fallingfactorial_function = NULL;
        if (p_fallingfactorial_function == NULL) {
            validateSignature("std::string(*fallingfactorial_function)(std::string,int)");
            p_fallingfactorial_function = (Ptr_fallingfactorial_function)R_GetCCallable("numberr", "_numberr_fallingfactorial_function");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fallingfactorial_function(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::string >(rcpp_result_gen);
    }

    inline double risingfactorial(int x, int n) {
        typedef SEXP(*Ptr_risingfactorial)(SEXP,SEXP);
        static Ptr_risingfactorial p_risingfactorial = NULL;
        if (p_risingfactorial == NULL) {
            validateSignature("double(*risingfactorial)(int,int)");
            p_risingfactorial = (Ptr_risingfactorial)R_GetCCallable("numberr", "_numberr_risingfactorial");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_risingfactorial(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::string risingfactorial_function(std::string x, int n) {
        typedef SEXP(*Ptr_risingfactorial_function)(SEXP,SEXP);
        static Ptr_risingfactorial_function p_risingfactorial_function = NULL;
        if (p_risingfactorial_function == NULL) {
            validateSignature("std::string(*risingfactorial_function)(std::string,int)");
            p_risingfactorial_function = (Ptr_risingfactorial_function)R_GetCCallable("numberr", "_numberr_risingfactorial_function");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_risingfactorial_function(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::string >(rcpp_result_gen);
    }

    inline unsigned long int gcd_recursive(unsigned int a, unsigned int b) {
        typedef SEXP(*Ptr_gcd_recursive)(SEXP,SEXP);
        static Ptr_gcd_recursive p_gcd_recursive = NULL;
        if (p_gcd_recursive == NULL) {
            validateSignature("unsigned long int(*gcd_recursive)(unsigned int,unsigned int)");
            p_gcd_recursive = (Ptr_gcd_recursive)R_GetCCallable("numberr", "_numberr_gcd_recursive");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_gcd_recursive(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<unsigned long int >(rcpp_result_gen);
    }

    inline unsigned long int gcd_division(unsigned int a, unsigned int b) {
        typedef SEXP(*Ptr_gcd_division)(SEXP,SEXP);
        static Ptr_gcd_division p_gcd_division = NULL;
        if (p_gcd_division == NULL) {
            validateSignature("unsigned long int(*gcd_division)(unsigned int,unsigned int)");
            p_gcd_division = (Ptr_gcd_division)R_GetCCallable("numberr", "_numberr_gcd_division");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_gcd_division(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<unsigned long int >(rcpp_result_gen);
    }

    inline unsigned long int gcd_subtraction(unsigned int a, unsigned int b) {
        typedef SEXP(*Ptr_gcd_subtraction)(SEXP,SEXP);
        static Ptr_gcd_subtraction p_gcd_subtraction = NULL;
        if (p_gcd_subtraction == NULL) {
            validateSignature("unsigned long int(*gcd_subtraction)(unsigned int,unsigned int)");
            p_gcd_subtraction = (Ptr_gcd_subtraction)R_GetCCallable("numberr", "_numberr_gcd_subtraction");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_gcd_subtraction(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<unsigned long int >(rcpp_result_gen);
    }

    inline NumericVector gcd_extended(unsigned int a, unsigned int b) {
        typedef SEXP(*Ptr_gcd_extended)(SEXP,SEXP);
        static Ptr_gcd_extended p_gcd_extended = NULL;
        if (p_gcd_extended == NULL) {
            validateSignature("NumericVector(*gcd_extended)(unsigned int,unsigned int)");
            p_gcd_extended = (Ptr_gcd_extended)R_GetCCallable("numberr", "_numberr_gcd_extended");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_gcd_extended(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline bool iscomposite(int n) {
        typedef SEXP(*Ptr_iscomposite)(SEXP);
        static Ptr_iscomposite p_iscomposite = NULL;
        if (p_iscomposite == NULL) {
            validateSignature("bool(*iscomposite)(int)");
            p_iscomposite = (Ptr_iscomposite)R_GetCCallable("numberr", "_numberr_iscomposite");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_iscomposite(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool iscoprime(int a, int b) {
        typedef SEXP(*Ptr_iscoprime)(SEXP,SEXP);
        static Ptr_iscoprime p_iscoprime = NULL;
        if (p_iscoprime == NULL) {
            validateSignature("bool(*iscoprime)(int,int)");
            p_iscoprime = (Ptr_iscoprime)R_GetCCallable("numberr", "_numberr_iscoprime");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_iscoprime(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool iseven(int n) {
        typedef SEXP(*Ptr_iseven)(SEXP);
        static Ptr_iseven p_iseven = NULL;
        if (p_iseven == NULL) {
            validateSignature("bool(*iseven)(int)");
            p_iseven = (Ptr_iseven)R_GetCCallable("numberr", "_numberr_iseven");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_iseven(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool isodd(int n) {
        typedef SEXP(*Ptr_isodd)(SEXP);
        static Ptr_isodd p_isodd = NULL;
        if (p_isodd == NULL) {
            validateSignature("bool(*isodd)(int)");
            p_isodd = (Ptr_isodd)R_GetCCallable("numberr", "_numberr_isodd");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_isodd(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool issquare(int n) {
        typedef SEXP(*Ptr_issquare)(SEXP);
        static Ptr_issquare p_issquare = NULL;
        if (p_issquare == NULL) {
            validateSignature("bool(*issquare)(int)");
            p_issquare = (Ptr_issquare)R_GetCCallable("numberr", "_numberr_issquare");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_issquare(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool isprime(double n) {
        typedef SEXP(*Ptr_isprime)(SEXP);
        static Ptr_isprime p_isprime = NULL;
        if (p_isprime == NULL) {
            validateSignature("bool(*isprime)(double)");
            p_isprime = (Ptr_isprime)R_GetCCallable("numberr", "_numberr_isprime");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_isprime(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline bool lucas_lehmer(unsigned int n) {
        typedef SEXP(*Ptr_lucas_lehmer)(SEXP);
        static Ptr_lucas_lehmer p_lucas_lehmer = NULL;
        if (p_lucas_lehmer == NULL) {
            validateSignature("bool(*lucas_lehmer)(unsigned int)");
            p_lucas_lehmer = (Ptr_lucas_lehmer)R_GetCCallable("numberr", "_numberr_lucas_lehmer");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_lucas_lehmer(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<bool >(rcpp_result_gen);
    }

    inline NumericVector catalan(unsigned long int n) {
        typedef SEXP(*Ptr_catalan)(SEXP);
        static Ptr_catalan p_catalan = NULL;
        if (p_catalan == NULL) {
            validateSignature("NumericVector(*catalan)(unsigned long int)");
            p_catalan = (Ptr_catalan)R_GetCCallable("numberr", "_numberr_catalan");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_catalan(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector supercatalan(long int n) {
        typedef SEXP(*Ptr_supercatalan)(SEXP);
        static Ptr_supercatalan p_supercatalan = NULL;
        if (p_supercatalan == NULL) {
            validateSignature("NumericVector(*supercatalan)(long int)");
            p_supercatalan = (Ptr_supercatalan)R_GetCCallable("numberr", "_numberr_supercatalan");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_supercatalan(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector fibonacci(unsigned long int n) {
        typedef SEXP(*Ptr_fibonacci)(SEXP);
        static Ptr_fibonacci p_fibonacci = NULL;
        if (p_fibonacci == NULL) {
            validateSignature("NumericVector(*fibonacci)(unsigned long int)");
            p_fibonacci = (Ptr_fibonacci)R_GetCCallable("numberr", "_numberr_fibonacci");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_fibonacci(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector three_n_one(unsigned long int n) {
        typedef SEXP(*Ptr_three_n_one)(SEXP);
        static Ptr_three_n_one p_three_n_one = NULL;
        if (p_three_n_one == NULL) {
            validateSignature("NumericVector(*three_n_one)(unsigned long int)");
            p_three_n_one = (Ptr_three_n_one)R_GetCCallable("numberr", "_numberr_three_n_one");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_three_n_one(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

}

#endif // RCPP_numberr_RCPPEXPORTS_H_GEN_
