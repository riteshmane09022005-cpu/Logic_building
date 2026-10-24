//Input : 10
//1  3   
#include<stdio.h>
#include<stdlib.h>

int summation(int iNo)
{
    int icnt = 0;
    int isum = 0;

    for(icnt =1; icnt <= iNo;icnt++)
    {
       isum = isum + icnt;
   
    }

   return isum;
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequancy:\n");
    scanf("%d",&iValue);


    iRet = summation(iValue);

    printf("Summassion is :%d\n",iRet);

    return EXIT_SUCCESS;
}