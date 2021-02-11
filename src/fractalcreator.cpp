#include "fractalcreator.h"

Fractalcreator::Fractalcreator(int width, int height) : m_width(width), m_height(height), m_histogram(new int[Mandelbrot::MAX_ITER]{}), m_fractal(new int[m_width*m_height]{}), m_bitmap(m_width, m_height), m_zoomlist(m_width, m_height) 
{
  m_zoomlist.pushZoomValues(Zoom(m_width/2, m_height/2, 4.0/m_width));
}

void Fractalcreator::calcIter()
{
  for (int j = 0; j < m_height; j++)
  {
    for (int i = 0; i < m_width; i++)
    { 
      std::pair<double,double> coords = m_zoomlist.doZoom(i, j); 
      int iterations = Mandelbrot::getIter(coords.first, coords.second);
      m_fractal[j*m_width + i] = iterations;
      if (iterations != Mandelbrot::MAX_ITER)
      {
        m_histogram[iterations]++;
      }
    }
  }
}

void Fractalcreator::calcTotalIter()
{
  for (int i = 0; i < Mandelbrot::MAX_ITER; i++)
  {
    m_total += m_histogram[i];
  }
}

void Fractalcreator::drawFractal()
{
  RGB firstColor(50,60,70);
  RGB secondColor(230, 210, 240);
  RGB colorDiff = secondColor - firstColor;
  for (int j = 0; j < m_height; j++)
  {
    for (int i = 0; i < m_width; i++)
    { 
      int iterations = m_fractal[j*m_width + i]; 
      if (iterations != Mandelbrot::MAX_ITER)
      {
        double hue = 0.0; // varies between 0 and 1
        for (int k = 0; k <= iterations; k++)
        {
          hue += (static_cast<double>(m_histogram[k]))/m_total; 
        }
        m_bitmap.setPixel(i, j, static_cast<uint8_t>(std::pow(colorDiff.m_r, hue)), static_cast<uint8_t>(std::pow(colorDiff.m_g, hue)), static_cast<uint8_t>(std::pow(colorDiff.m_b, hue)));
      }
    }
  }
}

void Fractalcreator::addZoom(const Zoom& zoom)
{
  m_zoomlist.pushZoomValues(zoom);
}

void Fractalcreator::writeBitmap(std::string name)
{
  m_bitmap.write(name);
}

void Fractalcreator::runFractal(std::string name)
{
  addZoom(Zoom(316, 182, 0.1));
  addZoom(Zoom(491, 158, 0.1));
  addZoom(Zoom(411, 324, 0.1));
  
  calcIter();
  calcTotalIter();
  drawFractal();
  writeBitmap(name);
}