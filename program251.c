#include<stdio.h>
#include<stdlib.h>

int countSpaceX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            icount++;
        }

        str++;
    }

    return icount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^\n]", Arr);

    iRet = countSpaceX(Arr);

    printf("Frequency of White space is : %d\n", iRet);

    return EXIT_SUCCESS;
}