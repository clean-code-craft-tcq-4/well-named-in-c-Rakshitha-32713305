#include "colorCode.h"
#include "colorCode_Mapping.h"
#include "colorCode_ReferenceManual.h"
#include "colorCode_Pair_Number_test.h"

int main()
{
    colorCode_testNumberToPair(4, WHITE, BROWN);
    colorCode_testNumberToPair(5, WHITE, SLATE);

    colorCode_testPairToNumber(BLACK, ORANGE, 12);
    colorCode_testPairToNumber(VIOLET, SLATE, 25);

    colorcode_ReferenceManual_Display();
    
    return 0;
}
