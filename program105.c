
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int icnt = 0, iSum = 0;

    for(icnt = 1; icnt <= iNo / 2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            iSum = iSum + icnt;
        }
    }

    if(iSum == iNo)
    {
       return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("it is perfect number\n");

    }
    else
    {
        printf("it is not a perfect number\n");
    }

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2) = O(N)
