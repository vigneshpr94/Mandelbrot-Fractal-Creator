#ifndef BITMAPINFO_H_
#define BITMAPINFO_H_

#include <cstdint>

#pragma pack(push, 2) //to avoid structure padding

struct BitmapInfo
{
  int32_t headerSize{40};  
  int32_t width;  //width of the bitmap
  int32_t height; //height of the bitmap
  int16_t planes{1};
  int16_t bitsPerPixel{24};  //1 byte for each color (RGB)
  int32_t compression{0};
  int32_t dataSize{0};
  int32_t horizontalRes{2400};
  int32_t verticalRes{2400};
  int32_t colors{0};
  int32_t impColors{0}; 
};

#pragma pack(pop)

#endif // BITMAPINFO_H_ 