#include "rgb.h"

RGB::RGB(double r, double g, double b) : m_r(r), m_g(g), m_b(b) {}

RGB operator-(const RGB& first, const RGB& second)
{
  return RGB(first.m_r - second.m_r, first.m_g - second.m_g, first.m_b - second.m_b);
}