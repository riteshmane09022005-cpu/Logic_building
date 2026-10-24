#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue1 = 0, ivalue2 = 0,iReasult =0;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

    if(ivalue1 > ivalue2)
    {
        printf("maximum is :%d\n",ivalue1);
    }
    else
    {
        printf("maximum is :%d\n",ivalue2);
    }
    return EXIT_SUCCESS;
}
