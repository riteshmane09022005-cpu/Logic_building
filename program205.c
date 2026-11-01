/*
   Input :   4
   Output:  1 a    2 b     3 c    4 d
*/    

#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt = 0;
    char ch = '\0';

    for(icnt = 1, ch = 'a'; icnt <= ino; icnt++, ch++)
    {
        printf("%d %c\t", icnt, ch);
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
