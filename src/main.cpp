#include <iostream>

#include "fractalcreator.h"

int main() {
  
  Fractalcreator fractalcreator(800, 600); 
  
  fractalcreator.runFractal("mandelbrot.bmp");
  
  std::cout << "Finished" << std::endl;
  return 0;
}