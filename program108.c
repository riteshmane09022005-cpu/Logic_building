#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
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
       return true;
    }
    else
    {
       return false;
    }
}

int main(void)                                               
{
  int iValue = 0;

  bool bRet = false;

  printf("Enter number :\n");
  scanf("%d",&iValue);

  CheckPrime(iValue);

  bRet = CheckPrime(iValue);
  if(bRet == true)
  {
    printf("It is a prime number\n");

  }
  else
  {
    printf("It is not a prime number\n");
  }

    return EXIT_SUCCESS;
}