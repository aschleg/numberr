#include <Rcpp.h>
#include <math.h>

using namespace Rcpp;


namespace Constants {
  
  static double CatalansConstant = .915965594177;

}

// [[Rcpp::export]]
double catalans_constant(int k = 10) {
  double K = 0;
  
  for (int i = 0; i <= k; i++) {
    K = K + pow(-1, i) / pow(2 * i + 1, 2);
  }
  
  return K;
}