#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int icnt =0;
    for(icnt = 1; icnt <=iNo; icnt++)
    {
        printf("*\n");
    }
}


int main()
{

    int iValue = 0;
    printf("Enter the frequancy:\n");
    scanf("%d",&iValue);

    pattern(iValue);

       
    return EXIT_SUCCESS;
}
