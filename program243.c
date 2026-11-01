#include<stdio.h>
#include<stdlib.h>

int strelnX(char *str)
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
    scanf("%[^'\n']s",Arr);

    iRet = strelnX(Arr);

    printf("String length is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}