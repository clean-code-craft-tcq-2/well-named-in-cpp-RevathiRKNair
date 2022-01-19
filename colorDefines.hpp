#ifndef COLOR_DEFINE_H_
#define COLOR_DEFINE_H_

#define MAX_COLORPAIR 25

namespace TelCoColorCoder
{

    enum class MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum class MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


    const char* MajorColorNames[] = 
    {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] = 
    {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

}


#endif  // COLOR_DEFINE_H_