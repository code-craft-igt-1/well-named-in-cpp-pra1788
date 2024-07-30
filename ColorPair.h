#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>
#include <stdexcept>
#include "ColorPairConstants.h"

namespace TelCoColorCoder {

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

    public:
        ColorPair(MajorColor major, MinorColor minor);

        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString() const;

        // Static methods for conversion
        static ColorPair GetColorFromPairNumber(int pairNumber);
        static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    };

} // namespace TelCoColorCoder

#endif // COLOR_PAIR_H
