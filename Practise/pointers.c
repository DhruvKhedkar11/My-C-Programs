#include <stdio.h>
int main(){
    int n, *p;
    scanf("%d", &n);
    *p = n;
    printf("*********************************************\n");

    printf("%d\n", n);
    printf("%d\n", &n);
    printf("%d\n", *p);
    printf("%d\n", p);

    return 0;
}