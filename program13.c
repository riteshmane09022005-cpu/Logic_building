

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////      Header file
// function name: Addition
// Input:       : Integer,Integer
// Output       : Integer  
// Description  : performs addition
// Date         : 04/10/2026  
// Author:      :Mane Ritesh Umakant
//
////////////////////////////////////////////////////

// #define EXIT_SUCCESS 0
//

int Addition(
    
              int ino1,   //first input
    
              int ino2  //seacond input  
            )           

{              //function parameter
  int iAns = 0;

  iAns = ino1 + ino2;     //Biusiness logic    function reusable

  return iAns;
}
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

//////////////////////////////////////////////////
//
// step 5:Test the program
// 
// tasted taset cases
//
// ------------------------------------------------------------------
// INPUT1          INPUT2        Output
//-------------------------------------------------------------------
//   10              11             21
//   11              0              11
//   0               11             11
//   20              -9             11
//   -9              20             11
//   -20             -11            -31
//////////////////////////////////////////////////



