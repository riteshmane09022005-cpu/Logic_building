#include<stdio.h>
#include<stdlib.h>

int minimum(int iNo1, int iNo2)
{
    
    if(iNo1 < iNo2)
    {
       return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0,iReasult =0;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

    iReasult = minimum(ivalue1,ivalue2);

    printf("minimum number is :%d\n",iReasult);


    return EXIT_SUCCESS;
}
