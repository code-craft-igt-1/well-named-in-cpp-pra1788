#include "ColorPair.h"

namespace TelCoColorCoder {

    // Define static member arrays
    const char* ColorPair::MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    const char* ColorPair::MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    const int ColorPair::numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int ColorPair::numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor)
    {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::ToString() const {
        std::string colorPairStr = MajorColorNames[static_cast<int>(majorColor)];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[static_cast<int>(minorColor)];
        return colorPairStr;
    }

    ColorPair ColorPair::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int ColorPair::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
    }

} // namespace TelCoColorCoder
