#ifndef COLOR_PAIR_H_
#define COLOR_PAIR_H_

#include "colorDefines.hpp"
#include <string>

namespace TelCoColorCoder
{
    class ColorPair 
    {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() 
            {
                return majorColor;
            }
            MinorColor getMinor() 
            {
                return minorColor;
            }
            std::string ToString() 
            {
                std::string colorPairStr = MajorColorNames[static_cast<int>(majorColor)];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[static_cast<int>(minorColor)];
                return colorPairStr;
            }
    };
}

#endif  // COLOR_PAIR_H_