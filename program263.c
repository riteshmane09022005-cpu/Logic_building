#include<stdio.h>
#include<stdlib.h>

void countFrequencyX(char *str)
{
    int icountSmall = 0, icountCapital = 0, icountDigit = 0, icountSpecial = 0;

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
        else if(*str >= '0' && *str <= '9')           
        { 
            icountDigit++;
        }
        else
        {
            icountSpecial;
        }

        str++;
    }

    printf("Number of Capital letters : %d\n", icountCapital);
    printf("Number of Small letters : %d\n", icountSmall);
    printf("Number of Digits  : %d\n", icountDigit);
    printf("Number of Digits  : %d\n", icountSpecial);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^\n]", Arr);

    countFrequencyX(Arr);


    return EXIT_SUCCESS;
}