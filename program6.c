/*
step 1: understand the problem statment
step 2: write the algorithim
step 3: Deside the program langauage
step 4: write the program
step 5: Test the program
*/
///////////////////////////////////////////////////
//
//step 1: understand the problem statment
//        user is going to enter any 2 integers
//        and we have to perform addition
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//step 2:  write the algorithim
/*start
    Accept first number as no1
    Accept first number as no1
    create the variable as ans to store the result
    perform the addition and store into ans
    display the result form ans
end
*/
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//step 3: Deside the program langauage 
//        we select c programing
//        
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//step 4: write the program 
///////////////////////////////////////////////////

#include<stdio.h>

int Addition(int ino1, int ino2)
{
  int iAns = 0;

  iAns = ino1 + ino2;     //Biusiness logic    function reusable

  return iAns;
}                               //helper function//

int main()                             
{                  
  int ivalue1 =0,ivalue2 = 0,iResult = 0; 

  printf("Enter first number");     
  scanf("%d",&ivalue1);

  printf("Enter seacond number");
  scanf("%d",&ivalue2);

  iResult= Addition(ivalue1 , ivalue2);          
   

  printf("Addition is :%d\n",iResult);  
    return 0;
}


