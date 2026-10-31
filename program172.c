
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

float AverageDigits(int iNo)
{
    int iSum = 0;
    int iCount = 0;
    float fAvag = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
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

    printf("Average of Digits: %.2f\n", fRet);

    return EXIT_SUCCESS;
}
