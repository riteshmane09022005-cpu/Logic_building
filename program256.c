#include<stdio.h>
#include<stdlib.h>

int countSmallX(char *str)
{
    int icount = 0;

      while(*str != '\0')
    {
        if(*str >= 97 && * str <= 122)
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

    iRet = countSmallX(Arr);

    printf("Frequency of Small Latters : %d\n", iRet);

    return EXIT_SUCCESS;
}