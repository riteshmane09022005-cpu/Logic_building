
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    iTemp = iNo;


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

bool CheckPalindrome(int iNo)
{
    
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    iTemp = iNo;
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
    if(iNo < 0)
    {
        return false;
    }

    return (iNo == Reverse(iNo));
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a Palindrome number\n", iValue);
    }
    else
    {
        printf("%d is not a Palindrome number\n", iValue);
    }

    return EXIT_SUCCESS;
}
