#include<stdio.h>
#include<stdlib.h>

int countDigitsX(char *str)
{
    int icount = 0;

      while(*str != '\0')
    {
        if(*str >= '0' && * str <= '9')
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

    iRet = countDigitsX(Arr);

    printf("Frequency of Digits: %d\n", iRet);

    return EXIT_SUCCESS;
}