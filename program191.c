/*
   Input :   4
   Output:  -4  -3   -2   -1    
*/

#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt = 0;

    for(icnt = -ino; icnt <= ino; icnt++) //time complexcity O(2N)
    {
        printf("%d\t", icnt);
    }

    printf("\n");
}
//Time complexcity: O(2n)

int main()
{
    int ivalue = 0;

    printf("Enter the value:\n");
    scanf("%d", &ivalue);

    pattern(ivalue);

    return EXIT_SUCCESS;
}
