
#include<stdio.h>
#include<stdlib.h>

int Sumfactors(int iNo)
{
    int icnt = 0, iSum = 0;

    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            iSum = iSum + icnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Sumfactors(iValue);

    printf("Summation of factors: %d\n", iRet);

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2) = O(N)
