#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter the value of n:");

    scanf("%d", &n);
for(int i=1;i<=n;i++)

{
fact*=i;
}
printf("factorial of a number is %d",fact);
    return 0;
}
