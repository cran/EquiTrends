// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// grouped_mean
arma::vec grouped_mean(arma::vec x, arma::vec group);
RcppExport SEXP _EquiTrends_grouped_mean(SEXP xSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(grouped_mean(x, group));
    return rcpp_result_gen;
END_RCPP
}
// between_transformation
arma::vec between_transformation(arma::vec x, arma::vec group);
RcppExport SEXP _EquiTrends_between_transformation(SEXP xSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(between_transformation(x, group));
    return rcpp_result_gen;
END_RCPP
}
// matrix_between_transformation
arma::mat matrix_between_transformation(arma::mat x, arma::vec group);
RcppExport SEXP _EquiTrends_matrix_between_transformation(SEXP xSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_between_transformation(x, group));
    return rcpp_result_gen;
END_RCPP
}
// ols_cholesky
arma::mat ols_cholesky(arma::mat XtX, arma::mat Xty);
RcppExport SEXP _EquiTrends_ols_cholesky(SEXP XtXSEXP, SEXP XtySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xty(XtySEXP);
    rcpp_result_gen = Rcpp::wrap(ols_cholesky(XtX, Xty));
    return rcpp_result_gen;
END_RCPP
}
// double_demean
arma::mat double_demean(arma::mat x, arma::vec individual, arma::vec time, arma::mat WD);
RcppExport SEXP _EquiTrends_double_demean(SEXP xSEXP, SEXP individualSEXP, SEXP timeSEXP, SEXP WDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type WD(WDSEXP);
    rcpp_result_gen = Rcpp::wrap(double_demean(x, individual, time, WD));
    return rcpp_result_gen;
END_RCPP
}
// maxTestBoot_bootstrap
arma::vec maxTestBoot_bootstrap(const arma::vec& Xb, const arma::mat& X, const int B, const double variance, const arma::vec& ID, const arma::vec& period, const arma::mat& WD, const int no_placebos);
RcppExport SEXP _EquiTrends_maxTestBoot_bootstrap(SEXP XbSEXP, SEXP XSEXP, SEXP BSEXP, SEXP varianceSEXP, SEXP IDSEXP, SEXP periodSEXP, SEXP WDSEXP, SEXP no_placebosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb(XbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type B(BSEXP);
    Rcpp::traits::input_parameter< const double >::type variance(varianceSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type period(periodSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type WD(WDSEXP);
    Rcpp::traits::input_parameter< const int >::type no_placebos(no_placebosSEXP);
    rcpp_result_gen = Rcpp::wrap(maxTestBoot_bootstrap(Xb, X, B, variance, ID, period, WD, no_placebos));
    return rcpp_result_gen;
END_RCPP
}
// maxTestBoot_wildbootstrap
arma::vec maxTestBoot_wildbootstrap(const arma::vec& Xb, const arma::mat& X, int B, const arma::vec& u_ddot, const arma::vec& ID, const arma::vec& period, int no_placebos, const arma::mat& WD);
RcppExport SEXP _EquiTrends_maxTestBoot_wildbootstrap(SEXP XbSEXP, SEXP XSEXP, SEXP BSEXP, SEXP u_ddotSEXP, SEXP IDSEXP, SEXP periodSEXP, SEXP no_placebosSEXP, SEXP WDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Xb(XbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type u_ddot(u_ddotSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type period(periodSEXP);
    Rcpp::traits::input_parameter< int >::type no_placebos(no_placebosSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type WD(WDSEXP);
    rcpp_result_gen = Rcpp::wrap(maxTestBoot_wildbootstrap(Xb, X, B, u_ddot, ID, period, no_placebos, WD));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_EquiTrends_grouped_mean", (DL_FUNC) &_EquiTrends_grouped_mean, 2},
    {"_EquiTrends_between_transformation", (DL_FUNC) &_EquiTrends_between_transformation, 2},
    {"_EquiTrends_matrix_between_transformation", (DL_FUNC) &_EquiTrends_matrix_between_transformation, 2},
    {"_EquiTrends_ols_cholesky", (DL_FUNC) &_EquiTrends_ols_cholesky, 2},
    {"_EquiTrends_double_demean", (DL_FUNC) &_EquiTrends_double_demean, 4},
    {"_EquiTrends_maxTestBoot_bootstrap", (DL_FUNC) &_EquiTrends_maxTestBoot_bootstrap, 8},
    {"_EquiTrends_maxTestBoot_wildbootstrap", (DL_FUNC) &_EquiTrends_maxTestBoot_wildbootstrap, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_EquiTrends(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}