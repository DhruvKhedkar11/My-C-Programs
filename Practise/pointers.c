#include <stdio.h>
int main(){
    int n,k, *p, *j;
    scanf("%d", &n);
    k = n;
    *p = n;
    j = &k;
    printf("*********************************************\n");

    printf("%d\n", n);
    printf("%d\n", &n);
    printf("%d\n", *p);
    printf("%d\n", p);

    return 0;
}