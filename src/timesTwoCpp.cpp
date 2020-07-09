#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//
// After you process with sourceCpp, you can run the R code timesTwoCpp(42)

//' Multiply by two (Rcpp version)
//'
//' This function multiples numbers by two, using C++ code.
//'
//' @param x Numeric vector.
//'
//' @return A numeric vector that is double the input vector
//' @export
// [[Rcpp::export]]
NumericVector timesTwoCpp(NumericVector x) {
  return x * 2;
}
