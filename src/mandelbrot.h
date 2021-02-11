#ifndef MANDELBROT_H_
#define MANDELBROT_H_

#include <iostream>

class Mandelbrot
{
public:
  static const int MAX_ITER = 1000;
  static int getIter(double x, double y);
};

#endif // MANDELBROT_H_