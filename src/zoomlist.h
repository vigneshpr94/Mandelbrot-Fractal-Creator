#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

#include <iostream>
#include <vector>
#include <utility>

#include "zoom.h"

class Zoomlist
{  
public:
  Zoomlist(int width, int height);
  void pushZoomValues(const Zoom& zoom);
  std::pair<double, double> doZoom(int x, int y);
  
private:
  int m_width{0};
  int m_height{0};
  std::vector<Zoom> m_zoomValues;
  
  double m_xCenter{0.0};
  double m_yCenter{0.0};
  double m_scale{1.0};
};

#endif //ZOOMLIST_H_