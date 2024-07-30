#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

        // Static member arrays for color names
        static const char* MajorColorNames[];
        static const char* MinorColorNames[];
        static const int numberOfMajorColors;
        static const int numberOfMinorColors;

    public:
        ColorPair(MajorColor major, MinorColor minor);

        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;

        static ColorPair GetColorFromPairNumber(int pairNumber);
        static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    };

} // namespace TelCoColorCoder

#endif // COLORPAIR_H
