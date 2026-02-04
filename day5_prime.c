#include <stdio.h>

int main()
{
    int num, i;
    int isPrime = 1; 
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1)
    {
        printf("Not a Prime Number");
        return 0;
    }
    for(i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            isPrime = 0;  
            break;
        }
    }

    if(isPrime == 1)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
