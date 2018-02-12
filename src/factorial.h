#define _USE_MATH_DEFINES
#include <math.h>


#ifndef __RAMANUJANFACTORIAL__
#define __RAMANUJANFACTORIAL__

inline float _ramanujan(int n) {
  float f = sqrt(M_PI) * pow(n, n) * exp(-n) * pow((8.0 * pow(n, 3.0) + 4.0 * pow(n, 2.0) + n + 1.0 / 30.0), 1.0 / 6.0);
  return f;
}

#endif


#ifndef __STIRLINGFACTORIAL__
#define __STIRLINGFACTORIAL__

inline float _stirling(int n) {
  float f = sqrt((2.0 * n + 1.0 / 3.0) * M_PI) * pow(n, n) * exp(-n);
  return f;
}

#endif


#ifndef __STIRLINGLNFACTORIAL__
#define __STIRLINGLNFACTORIAL__

inline float _stirlingln(int n) {
  float f = n * log(n) - n + (1.0 / 6.0) * log(n * (1.0 + 4.0 * n * (1.0 + 2.0 * n))) + 0.5 * log(M_PI);

  return f;
}

#endif


#ifndef __FACTORIAL__
#define __FACTORIAL__

inline long int _factorial(long int n) {
  long int fac = 1;

  for (long int i = n; i >= 1; i--) {
    fac = fac * i;
  }

  return fac;
}

#endif
