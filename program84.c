#include<stdio.h>
#include<stdlib.h>

void checkDivisiable(int iNo)
{
  if((iNo % 5) == 0)
  {
    printf("it is divisiable\n");

  }
  else
  {
    printf("it is not divisiable by 5\n");
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