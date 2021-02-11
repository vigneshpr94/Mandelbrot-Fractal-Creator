#ifndef BITMAPFILE_H_
#define BITMAPFILE_H_

#include <cstdint>

#pragma pack(push, 2) //to avoid structure padding, it makes C++ align the struct for 2 bytes

struct BitmapFile
{
  char header[2]{'B', 'M'};
  int32_t fileSize;  //Size of the final file
  int32_t reserved{0};
  int32_t dataOffset;
};

#pragma pack(pop)

#endif // BITMAPFILE_H_