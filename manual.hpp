#ifndef MANUAL_H_
#define MANUAL_H_

#include <iostream>
#include "colorPair.hpp"

namespace TelCoColorCoder 
{
    ColorPair GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
    {
        return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
    }    
    void PrintRefManual()
    {
       std::cout << "Reference manual for 25-pair color code" << std::endl;
       std::cout<<"PairNumber  -  Major color Minor color"<<std::endl;
       for(int PairNumber =1; PairNumber<=MAX_COLORPAIR;PairNumber++)
       {
          TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(PairNumber);
          std::cout<<PairNumber<<"          -    "<<colorPair.ToString()<<std::endl;
       }
    }
}


 
#endif // MANUAL_H_ 