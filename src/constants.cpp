#include <Rcpp.h>
#include <math.h>

using namespace Rcpp;


namespace Constants {
  
  static double CatalansConstant = .915965594177;

}


//' Approximates Catalan's Constant, K.
//' 
//' @param k number of summations to perform, defaults to 10.
//' @return Approximated Catalan's Constant
//' @export
// [[Rcpp::export]]
double catalans_constant(int k = 10) {
  double K = 0;
  
  for (int i = 0; i <= k; i++) {
    K = K + pow(-1, i) / pow(2 * i + 1, 2);
  }
  
  return K;
}
