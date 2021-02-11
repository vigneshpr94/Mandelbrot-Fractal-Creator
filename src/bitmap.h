#ifndef BITMAP_H_
#define BITMAP_H_

#include <iostream>
#include <string>
#include <cstdint>
#include <memory>

class Bitmap
{
public:
  Bitmap(int width, int height); //Constructor
  
  bool write(std::string  filename);
  void setPixel(int r, int c, uint8_t red, uint8_t green, uint8_t blue); //Used to set pixels in bitmap to specify the colors
  ~Bitmap();
  
private:
  int m_width{0};
  int m_height{0};
  std::unique_ptr<uint8_t[]> m_pPixels{nullptr};  
};

#endif // BITMAP_H_ 