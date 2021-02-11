#ifndef RGB_H_
#define RGB_H_

class RGB
{
public:
  RGB(double r, double g, double b);
  double m_r;
  double m_g;
  double m_b;
};

RGB operator-(const RGB& first, const RGB& second);

#endif //RGB_H_