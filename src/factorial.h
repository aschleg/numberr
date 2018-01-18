#define _USE_MATH_DEFINES
#include <math.h>


#ifndef __RAMANUJANFACTORIAL__
#define __RAMANUJANFACTORIAL__

inline double _ramanujan(int n) {
  double f = sqrt(M_PI) * pow(n, n) * exp(-n) * pow((8 * pow(n, 3) + 4 * pow(n, 2) + n + 1 / 30), 1 / 6);
  return f;
}

#endif


#ifndef __STIRLINGFACTORIAL__
#define __STIRLINGFACTORIAL__

inline double _stirling(int n) {
  double f = sqrt((2.0 * n + 1.0 / 3.0) * M_PI) * pow(n, n) * exp(-n);

  return f;
}

#endif


#ifndef __STIRLINGLNFACTORIAL__
#define __STIRLINGLNFACTORIAL__

inline double _stirlingln(int n) {
  double f = n * log(n) - n + (1.0 / 6.0) * log(n * (1.0 + 4.0 * n * (1.0 + 2.0 * n))) + 0.5 * log(M_PI);

  return f;
}

#endif


#ifndef __FACTORIAL__
#define __FACTORIAL__

inline unsigned long int _factorial(unsigned long int n) {
  unsigned long int fac = 1;

  for(long int i = n; i >= 1; i--) {
    fac = fac * i;
  }

  return fac;
}

#endif

