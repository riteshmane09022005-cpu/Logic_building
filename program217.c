/*
  iRow = 4
  iCol = 4

  A  A  A  A
  A  A  A  A
  A  A  A  A
  A  A  A  A

*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{

     int i = 0, j =0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if((j%2) == 0)
           {
            printf("A\t");
           }
           
        }
        printf("\n\n");
    }

    
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter Number of rows :\n");
    scanf("%d",&ivalue1);
    
    printf("Enter Number of columns :\n");
    scanf("%d",&ivalue2);
    

    pattern(ivalue1, ivalue2);
    
    return EXIT_SUCCESS;
}
  