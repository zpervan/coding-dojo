#include "00_single_header.h"

int main()
{
    /* 01 - Binary Gap */
    binaryGap(1041);

    /* 02 - Cyclic Rotation */
    std::vector<int> cyclic_rotation_array{3, 8, 9, 7, 6};
    int rotation{4};

    cyclicRotation(cyclic_rotation_array, rotation);
    return 0;
}