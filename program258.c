#include<stdio.h>
#include<stdlib.h>

int countCapitalX(char *str)
{
    int icount = 0;

      while(*str != '\0')
    {
        if(*str >= 'A' && * str <= 'Z')
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

    iRet = countCapitalX(Arr);

    printf("Frequency of Capital Latters : %d\n", iRet);

    return EXIT_SUCCESS;
}