#include "ColorPair.h"
#include "ColorPairConstants.h"

namespace TelCoColorCoder {

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
        if (pairNumber < 1 || pairNumber > NumberOfMajorColors * NumberOfMinorColors) {
            throw std::out_of_range("Pair number out of range");
        }
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / NumberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % NumberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int ColorPair::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        if (static_cast<int>(major) >= NumberOfMajorColors || static_cast<int>(minor) >= NumberOfMinorColors) {
            throw std::out_of_range("Major or minor color out of range");
        }
        return static_cast<int>(major) * NumberOfMinorColors + static_cast<int>(minor) + 1;
    }

} // namespace TelCoColorCoder
