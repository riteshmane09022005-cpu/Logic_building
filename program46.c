#include<stdio.h>
#include<stdlib.h>

float Avarage(int iNo1, int iNo2,int iNo3)
{
    
    float fAns = 0.0f;

    fAns = ((float)iNo1 +(float) iNo2 + (float)iNo3)  / 2;

    return fAns;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0,ivalue3 = 0;
    float fReasult = 0.0f;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

     printf("Enter third number :\n");
    scanf("%d",&ivalue3);


    fReasult = Avarage(ivalue1,ivalue2,ivalue3);

    printf("Avarage number is :%f\n",fReasult);


    return EXIT_SUCCESS;
}
