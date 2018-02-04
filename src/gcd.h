#ifndef __GCD__
#define __GCD__

inline long int _gcd_recursive(int a, int b) {

  if (b == 0) {
    return a;
  }
  else {
    return _gcd_recursive(b, a % b);
  }
}

#endif

#ifndef __GCDDIVISION__
#define __GCDDIVISION__

inline long int _gcd_division(int a, int b) {
  while (b != 0) {
    int x = b;
    b = fmod(a, b);
    a = x;
  }
  return a;
}

#endif


#ifndef __GCDSUBTRACTION__
#define __GCDSUBTRACTION__

inline long int _gcd_subtraction(int a, int b) {
  while (a != b) {
    if (a > b) {
      a = a - b;
    }
    else {
      b = b - a;
    }
  }
  return a;
}

#endif

