#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\t");
    }
}


int main()
{
    pattern(7);
       
    return EXIT_SUCCESS;
}
