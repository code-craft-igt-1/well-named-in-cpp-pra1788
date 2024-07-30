#include "ColorPairConstants.h"

namespace TelCoColorCoder {

    // initilize arrays for major & minor colors
    const char* const MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* const MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    const int NumberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int NumberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

} // namespace TelCoColorCoder
