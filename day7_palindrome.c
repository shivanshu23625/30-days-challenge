#include <stdio.h>
int main()
{
    int num, original, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;   // store original number
    while(num != 0)
    {
        remainder = num % 10;           // get last digit
        reverse = reverse * 10 + remainder;  // build reverse
        num = num / 10;                 // remove last digit
    }
    if(original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
