#include<stdio.h>
#include<stdlib.h>

int countVowelsX(char *str)
{
    int icount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'E') ||
           (*str == 'I') || (*str == 'O') ||
           (*str == 'U'))
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

    iRet = countVowelsX(Arr);

    printf("Frequency of vowels is : %d\n", iRet);

    return EXIT_SUCCESS;
}