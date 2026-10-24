
#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
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
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

// Time complexity: O(N/2) = O(N)
