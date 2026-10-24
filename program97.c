
#include<stdio.h>
#include<stdlib.h>

unsigned long long int Factorial(int iNo)
{
    int icnt = 0;
    unsigned long long iFact = 1;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        iFact = iFact * icnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
   unsigned long long iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n", iRet);

    return EXIT_SUCCESS;
}
