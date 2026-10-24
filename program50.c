#include<stdio.h>
#include<stdlib.h>

int minimum (int iNo1, int iNo2,int iNo3 ,int iNo4)
{
  if((iNo1 < iNo2)&&(iNo1 < iNo3)&&(iNo1 < iNo4))   
  {
    return iNo1;
  }
  else if((iNo2 < iNo1)&&(iNo2 < iNo3)&&(iNo2 < iNo4))  
  {
    return iNo2;
  }
  else if((iNo3 < iNo1)&&(iNo3 < iNo2)&&(iNo3 < iNo4))  
  {
    return iNo3;
  }
  else
  {
    return iNo4;
  }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0,ivalue3 = 0,ivalue4 = 0;
    int iReasult = 0;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

    printf("Enter third number :\n");
    scanf("%d",&ivalue3);

    printf("Enter four number :\n");
    scanf("%d",&ivalue4);


    iReasult = minimum(ivalue1,ivalue2,ivalue3,ivalue4);

    printf("minimum number is :%d\n",iReasult);


    return EXIT_SUCCESS;
}
