#include"Header.h"

//////////////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////////////

int main()
{
  int ivalue1 =0,ivalue2 = 0,iResult = 0; 

  printf("Enter first number");     
  if(scanf("%d",&ivalue1) !=1)
  {
    fprintf(stderr,"Umable to proceed Input is Invalid\n");

    return EXIT_FAILURE;
  }

  printf("Enter seacond number");
  if(scanf("%d",&ivalue2) !=1)
  {
    fprintf(stderr,"Umable to proceed Input is Invalid\n");

    return EXIT_FAILURE;
  }

  iResult= Addition(ivalue1 , ivalue2);          
   

  printf("Addition is :%d\n",iResult);  
    return EXIT_SUCCESS;
}

