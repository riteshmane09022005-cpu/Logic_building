#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    bool bflag = false;
      
    for(icnt =2, bflag = true ; icnt <= iNo/2; icnt++)
    {
        if((iNo % icnt) == 0)
        {
          bflag = false;
        }
    }
    if((iNo % icnt) ==0)
    {
        bflag = false;
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
  if(bRet)                                             
  {
    printf("It is a prime number\n");

  }
  else
  {
    printf("It is not a prime number\n");
  }

    return EXIT_SUCCESS;
}