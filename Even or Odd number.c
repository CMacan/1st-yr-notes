#include <stdio.h>

int main()
{
int n;

printf ("Please enter a number:");
scanf("%d", &n);

if (n%2==0)
printf("The number %d is even", n);

else
printf("The number %d is odd", n);

return 0;
}
