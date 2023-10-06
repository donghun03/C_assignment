#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
   int n, a;
    printf("Please enter a number: ");
    scanf("%d", &n);
    if (n == 1)
        printf("It is not a prime number.");
    else if (n == 2)
        printf("It is a prime number.");
    else
    {
        for (a = 2; a < n; a++)
        {
            if (n % a != 0)
            {
                printf("It is a prime number.");
                break;
            }
            else
            {
                printf("It is not a prime number.");
                break;
            }
        }
    }
    return 0;
}
