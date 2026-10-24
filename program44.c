#include<stdio.h>
#include<stdlib.h>

float Avarage(int iNo1, int iNo2)
{
    
    float fAns = 0.0f;

    fAns = ((iNo1 + iNo2) /2);

    return fAns;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    float fReasult = 0.0f;

    printf("Enter firt number :\n");
    scanf("%d",&ivalue1);

    printf("Enter seacond number :\n");
    scanf("%d",&ivalue2);

    fReasult = Avarage(ivalue1,ivalue2);

    printf("Avarage number is :%f\n",fReasult);


    return EXIT_SUCCESS;
}
