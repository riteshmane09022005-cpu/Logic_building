#include<stdio.h>
#include<stdlib.h>

void maximum(int iNo1, int iNo2)
{
    
    if(iNo1 > iNo2)
    {
        printf("maximum is :%d\n",iNo1);
    }
    else
    {
        printf("maximum is :%d\n",iNo2);
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0,iReasult =0;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

    maximum(ivalue1,ivalue2);


    return EXIT_SUCCESS;
}
