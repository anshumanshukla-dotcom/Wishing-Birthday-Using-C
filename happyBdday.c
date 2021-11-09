// A C program to wish birthday to someone in a unique way
#include <stdio.h>

int main()
{
    char name[100];
    int run;
    printf("Enter your name: ");
    scanf("%[^\n]", &name);
    printf("\n");
    printf("Enter the number of times you want the pattern to be displayed: ");
    scanf("%d", &run);
    printf("\n\n");
    if (run == 0)
    {
        printf("You chose \"0\". As a result of which no pattern has been displayed.");
    }
    else
    {
        while (run)
        {
            for (int i = 0; i < 25; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    printf("- ");
                }
                printf("Happy Birthday %s", name);
                for (int k = 24 - i; k > 0; k--)
                {
                    printf(" -");
                }
                for (int l = 24 - i; l > 0; l--)
                {
                    printf(" -");
                }
                printf(" Happy Birthday %s", name);
                for (int m = 0; m < i; m++)
                {
                    printf(" -");
                }
                printf("\n");
            }
            for (int i = 24; i > 0; i--)
            {
                for (int j = i; j > 1; j--)
                {
                    printf("- ");
                }
                printf("Happy Birthday %s", name);
                for (int k = i; k < 25; k++)
                {
                    printf(" -");
                }
                for (int l = i; l < 25; l++)
                {
                    printf(" -");
                }
                printf(" Happy Birthday %s", name);
                for (int m = i; m > 1; m--)
                {
                    printf(" -");
                }
                printf("\n");
            }
            run--;
        }
    }
    return 0;
}