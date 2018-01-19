#include <cstdlib>
#include <ctime>
#include <iostream>
#include <math.h>

#ifndef __SEEDGEN__
#define __SEEDGEN__

inline void seedgen() {

  unsigned int time_seed = static_cast<unsigned int>(time(NULL));
  std::srand(time_seed);

}

#endif
