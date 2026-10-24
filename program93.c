
#include<stdio.h>
#include<stdlib.h>

long int Factorial(int iNo)
{
    int icnt = 0;
    long int iFact = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %ld\n", iRet);

    return EXIT_SUCCESS;
}
