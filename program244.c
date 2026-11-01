#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlenX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        icount++;
        str++;
    }

    return icount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%99[^\n]", Arr);

    iRet = strlenX(Arr);

    printf("String length is : %d\n", iRet);

    return EXIT_SUCCESS;
}