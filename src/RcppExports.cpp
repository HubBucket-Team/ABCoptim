// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// abc_cpp_
List abc_cpp_(NumericVector& par, Function& fn, const NumericVector& lb, const NumericVector& ub, int FoodNumber, int limit, int maxCycle, int criter);
RcppExport SEXP ABCoptim_abc_cpp_(SEXP parSEXP, SEXP fnSEXP, SEXP lbSEXP, SEXP ubSEXP, SEXP FoodNumberSEXP, SEXP limitSEXP, SEXP maxCycleSEXP, SEXP criterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type par(parSEXP);
    Rcpp::traits::input_parameter< Function& >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lb(lbSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type ub(ubSEXP);
    Rcpp::traits::input_parameter< int >::type FoodNumber(FoodNumberSEXP);
    Rcpp::traits::input_parameter< int >::type limit(limitSEXP);
    Rcpp::traits::input_parameter< int >::type maxCycle(maxCycleSEXP);
    Rcpp::traits::input_parameter< int >::type criter(criterSEXP);
    rcpp_result_gen = Rcpp::wrap(abc_cpp_(par, fn, lb, ub, FoodNumber, limit, maxCycle, criter));
    return rcpp_result_gen;
END_RCPP
}
