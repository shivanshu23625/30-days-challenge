#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello %s! Welcome to the 30 Days of Code Challenge.\n", name);

    return 0;
}
