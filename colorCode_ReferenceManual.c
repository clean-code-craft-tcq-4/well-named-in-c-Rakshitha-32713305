#include "colorCode.h"
#include "colorCode_Mapping.h"
#include "colorCode_ReferenceManual.h"

void colorcode_ReferenceManual_Display(void)
{
	int PairNumber = 1;
    int MajorColorCount = 0;
    int MinorColorCount = 0;
   
    printf("\n 25-pair Color Code Reference manual \n");
    printf("Pair No.\tMajor Color \tMinor Color\n");
    for(MajorColorCount = 0; MajorColorCount < numberOfMajorColors; MajorColorCount++)
    {
        for(MinorColorCount = 0; MinorColorCount < numberOfMinorColors; MinorColorCount++)
        {
            printf("%d \t\t%s \t\t%s\n",PairNumber++, MajorColorNames[MajorColorCount], MinorColorNames[MinorColorCount]);
        }
    }
}


 