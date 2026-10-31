
#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = (float)iSum / (float)iCount;

    printf("Sum of Digits: %d\n", iSum);
    printf("Number of Digits: %d\n", iCount);
    printf("Average of Digits: %.2f\n", fAvg);

    return EXIT_SUCCESS;
}
