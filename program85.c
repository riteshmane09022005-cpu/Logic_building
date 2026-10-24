/*
---------------------------------------------
                OPRATION
--------------------------------------------
 RESULT1        RESULT2          FINAL RESULT
 ---------------------------------------------
    TRUE         TRUE              TRUE
    TRUE         TRUE              FALSE
    FALSE        FALSE             FALSE      short circuit
    FALSE        FALSE             FALSE       short circuit

 ---------------------------------------------
*/


#include<stdio.h>
#include<stdlib.h>

void checkDivisiable(int iNo)
{
  if(((iNo % 3 ) == 0) && ((iNo % 5 ) == 0));
  {
    printf("it is divisiable\n");

  }
  else
  {
    printf("it is not divisiable by \n");
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