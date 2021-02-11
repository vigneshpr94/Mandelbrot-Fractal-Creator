#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <iostream>
#include <string>
#include <memory>
#include <cstdint>
#include <cmath>

#include "bitmap.h"
#include "mandelbrot.h"
#include "zoomlist.h"
#include "rgb.h"

class Fractalcreator
{
public:
  Fractalcreator(int width, int height);
  void runFractal(std::string name);
  
private:
  int m_width;
  int m_height;
  Bitmap m_bitmap;
  Zoomlist m_zoomlist;
  std::unique_ptr<int[]> m_histogram{nullptr};  //To get to know the no.of pixels with same no.of iterations
  std::unique_ptr<int[]> m_fractal{nullptr}; //Used to store the no.of iterations 
  int m_total{0};
  
  void calcIter();
  void calcTotalIter();
  void drawFractal();
  void addZoom(const Zoom& zoom);
  void writeBitmap(std::string name);
};

#endif //FRACTALCREATOR_H_