#include<stdio.h>
#include<stdlib.h>

void checkDivisiable(int iNo)
{
  if((iNo % 3 ) == 0)
  if ((iNo % 5 ) == 0)
  {
    printf("it is divisiable\n");

   }
    else
    {
       printf("it is not divisiable  \n");
    }
    
  else
  {
    printf("it is not divisiable  \n");
  }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    checkDivisiable(iValue);

    return EXIT_SUCCESS;
}