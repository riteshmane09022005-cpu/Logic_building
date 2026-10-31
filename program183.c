// 5
// 1   2   3   4   5
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int icnt =0;
    for(icnt = 1; icnt <=iNo; icnt++)
    {
        printf("%d\t"icnt);
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
