#include<stdio.h>
#include<stdlib.h>

void pattern()
{
    int icnt =0;
    for(icnt = 1; icnt <=5; icnt++)
    {
        printf("*\t");
    }
}


int main()
{
    pattern();
       
    return EXIT_SUCCESS;
}
