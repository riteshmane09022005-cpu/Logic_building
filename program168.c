
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

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

    printf("Sum of Digits: %d\n", iSum);

    return (float)iSum / iCount;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits:%f\n", fRet);

    return EXIT_SUCCESS;
}
