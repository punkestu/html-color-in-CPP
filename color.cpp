#include "color.h"

rgb hex2rgb(std::string hex){
      rgb ret;
      sscanf(hex.c_str(), "%02x%02x%02x",&ret.r,&ret.g,&ret.b);
      return ret;
}

colorClass colorClasification::_red(){
      return {"red",{IndianRed,LightCoral,Salmon,
                  DarkSalmon,LightSalmon,Crimson,
                  Red,FireBrick,DarkRed}};
};

colorClass colorClasification::_pink(){
      return {"pink",{Pink,LightPink,HotPink,
                  DeepPink,MediumVioletRed,PaleVioletRed}};
}

colorClass colorClasification::_orange(){
      return {"orange",{LightSalmon,Coral,Tomato,
                  OrangeRed,DarkOrange,Orange}};
}

colorClass colorClasification::_yellow(){
      return {"yellow",{Gold,Yellow,LightYellow,
      LemonChiffon,LightGoldenrodYellow,PapayaWhip,
      Moccasin,PeachPuff,PaleGoldenrod,Khaki,DarkKhaki}};
}

colorClass colorClasification::_purple(){
      return {"purple",{Lavender,Thistle,Plum,
      Violet,Orchid,Fuchsia,
      Magenta,MediumOrchid,MediumPurple,
      RebeccaPurple,BlueViolet,DarkViolet,
      DarkOrchid,DarkMagenta,Purple,
      Indigo,SlateBlue,DarkSlateBlue,MediumSlateBlue}};
}

colorClass colorClasification::_green(){
      return {"green",{GreenYellow,Chartreuse,LawnGreen,
      Lime,LimeGreen,PaleGreen,
      LightGreen,MediumSpringGreen,SpringGreen,
      MediumSeaGreen,SeaGreen,ForestGreen,
      Green,DarkGreen,YellowGreen,
      OliveDrab,Olive,DarkOliveGreen,
      MediumAquamarine,DarkSeaGreen,LightSeaGreen,
      DarkCyan,Teal}};
}

colorClass colorClasification::_blue(){
      return {"blue",{Aqua,Cyan,LightCyan,PaleTurquoise,
      Aquamarine,Turquoise,MediumTurquoise,
      DarkTurquoise,CadetBlue,SteelBlue,
      LightSteelBlue,PowderBlue,LightBlue,
      SkyBlue,LightSkyBlue,DeepSkyBlue,
      DodgerBlue,CornflowerBlue,MediumSlateBlue,
      RoyalBlue,Blue,MediumBlue,
      DarkBlue,Navy,MidnightBlue}};
}

colorClass colorClasification::_brown(){
      return {"brown",{Cornsilk,BlanchedAlmond,Bisque,
      NavajoWhite,Wheat,BurlyWood,Tan,RosyBrown,
      SandyBrown,Goldenrod,DarkGoldenrod,Peru,
      Chocolate,SaddleBrown,Sienna,Brown,Maroon}};
}

colorClass colorClasification::_white(){
      return {"white",{White,Snow,HoneyDew,MintCream,
      Azure,AliceBlue,GhostWhite,WhiteSmoke,
      SeaShell,Beige,OldLace,FloralWhite,
      Ivory,AntiqueWhite,Linen,LavenderBlush,
      MistyRose}};
}

colorClass colorClasification::_grey(){
      return {"grey",{Gainsboro,LightGray,Silver,
      DarkGray,Gray,DimGray,LightSlateGray,
      SlateGray,DarkSlateGray,Black}};
}