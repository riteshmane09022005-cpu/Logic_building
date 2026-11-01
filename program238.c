#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int icount = 0;

    char Arr[11] = "Jay Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while(*ptr != '\0')
    {
        icount++;       // Logic
        ptr++;
    }

    printf("Length of string is : %d\n", icount);

    return EXIT_SUCCESS;
}