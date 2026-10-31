
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

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits: %d\n", iRet);

    return EXIT_SUCCESS;
}
