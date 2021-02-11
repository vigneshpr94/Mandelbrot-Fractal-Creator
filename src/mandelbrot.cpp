#include <complex>
#include <cmath>

#include "mandelbrot.h"

int Mandelbrot::getIter(double x, double y)
{
  std::complex<double> z = 0;
  std::complex<double> c(x, y);
  int iter{0};
  
  while (iter < MAX_ITER)
  {
    z = z*z + c;
    if (std::abs(z) > 2)
    {
      break;
    }
    iter++;
  }
  return iter;
}