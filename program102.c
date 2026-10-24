#include<stdio.h>
#include<stdlib.h>

void Displayfactors(int iNo)
{
    int icnt = 0;

    printf("fctors of %d are \n",iNo);


    for(icnt = 1; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Displayfactors(iValue);

    return EXIT_SUCCESS;
}

//Time complexity : O(N/2)
