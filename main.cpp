#include <iostream.h>

using byte = unsigned char;
using u16 = unsigned short;

struct Mem
{
  static constexpr MAX_MEM = 1024*64;
  byte data[MAX_MEM];
}

int main()
{
  return 0;
}
