//Input : 4
//4321
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt=0;
    for(icnt =iNo; icnt >= 1; icnt--)
    {
       printf("%d\t",icnt);
   
    }

    printf("\n");
   
}
int main()
{
    int iValue = 0;
    printf("Enter the frequancy:\n");
    scanf("%d",&iValue);


    Display(iValue);

    return EXIT_SUCCESS;
}