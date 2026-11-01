#include<stdio.h>
#include<stdlib.h>

int countX(char *str)
{
    int icount = 0;

      while(*str != '\0')
    {
        if((*str >= 97 && * str <= 100))
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

    iRet = countX(Arr);

    printf("Frequency : %d\n", iRet);

    return EXIT_SUCCESS;
}