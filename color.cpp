#include "color.h"

rgb hex2rgb(std::string hex){
      rgb ret;
      sscanf(hex.c_str(), "%02x%02x%02x",&ret.r,&ret.g,&ret.b);
      return ret;
}