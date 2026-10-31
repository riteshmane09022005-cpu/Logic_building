
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvag = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;

        iNo = iNo / 10;
    }

    if(iCount == 0)
    {
        return 0.0f;
    }

    fAvag = (float)iSum / iCount;

    return fAvag;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits: %f\n", fRet);

    return EXIT_SUCCESS;
}
