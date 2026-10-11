#include <stdio.h>

void main()
{
    int a,b,n,i;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+1)
    {
        for(a=n-i; a>=1; a=a-1)
        {
            printf(" ");
        }
        
        for(b=1; b<=2*i-1; b=b+1)
        {
            printf("*");
        }
        
        printf("\n");
    }
}