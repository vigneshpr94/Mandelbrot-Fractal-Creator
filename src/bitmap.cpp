#include <fstream>

#include "bitmap.h"
#include "bitmapfile.h"
#include "bitmapinfo.h"

Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]{}) {}

bool Bitmap::write(std::string  filename) 
{
  BitmapFile bf;
  BitmapInfo bi;
  
  bf.fileSize = sizeof(BitmapFile) + sizeof(BitmapInfo) + (m_width*m_height*3);
  bf.dataOffset = sizeof(BitmapFile) + sizeof(BitmapInfo); //size before the data starts
  
  bi.width = m_width;
  bi.height = m_height;
  
  std::ofstream fout;
  fout.open(filename, std::ios::out | std::ios::binary);
  fout.write((char *) &bf, sizeof(BitmapFile));
  fout.write((char *) &bi, sizeof(BitmapInfo));
  fout.write((char *) m_pPixels.get(), m_width*m_height*3);
  fout.close();
  
  return true;
}

void Bitmap::setPixel(int r, int c, uint8_t red, uint8_t green, uint8_t blue)
{
  uint8_t *pPixel = m_pPixels.get();
  pPixel += (c*3)*m_width + (r*3);
  pPixel[0] = blue;
  pPixel[1] = green;
  pPixel[2] = red;
}

Bitmap::~Bitmap() {}