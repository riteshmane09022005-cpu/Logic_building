#include<stdio.h>
#include<stdlib.h>

int main()
{
  char sName[30];
  int iAge = 0;
  float fManrks =0.0f;

  printf("Enter your name:\n");
  scanf("%[^'\n']s",&sName);  //Enter remains in input buffer
  
  fflush(stdin);
  
  printf("Enter your age:\n");
  scanf("%d",&iAge);

  printf("Enter Your Marks:\n");
  scanf("%f",&fManrks);

  printf("Welcome %s\n,sName");
  printf("Your age is:%d\n",iAge);
  printf("Your Marks:%f\n",fManrks);
  

    return EXIT_SUCCESS;
}