#include<stdio.h>

#include<stdlib.h>


void cheakEven(int iNo)                            //function
{
  if((iNo % 2) == 0)
    {
      printf("It is Even number\n");
    }
    else
    {
      printf("It is odd number\n");
    }

}

int main()                                         //function
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    cheakEven(ivalue);

   
    return EXIT_SUCCESS;
}