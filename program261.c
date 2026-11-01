#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int icountSmall = 0; int icountCapital = 0;int icountDigit = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            icountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            icountSmall++;
        }
        else            //ISSUE
        { 
            icountDigit++;
        }

        str++;
    }

    printf("Number of Capital letters : %d\n", icountCapital);
    printf("Number of Small letters : %d\n", icountSmall);
    printf("Number of Digits  : %d\n", icountDigit);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^\n]", Arr);

    countFrequencyX(Arr);


    return EXIT_SUCCESS;
}