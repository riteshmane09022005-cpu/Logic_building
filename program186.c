/*
   Input :   4
   Output:   0  1   3   4  
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt = 0;

    for(icnt = 0; icnt <= ino; icnt++)
    {
        printf("%d\t", icnt);
    }

    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("Enter the value:\n");
    scanf("%d", &ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}
