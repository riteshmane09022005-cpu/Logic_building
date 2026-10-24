#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int icnt = 0;
    int iSum = 0;


    for(icnt =1; icnt <= iNo/2;icnt++)
    {
        if((iNo % icnt) ==0)
        {
          iSum = iSum + icnt;
        }
    }
    if(iSum == 1)
    {
        printf("It is prime number\n");
    }
    else
    {
        printf("it is nor a prime number\n");
    }
}

int main(void)                                                //     void input ghenar nahi
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  CheckPrime(iValue);

    return EXIT_SUCCESS;
}