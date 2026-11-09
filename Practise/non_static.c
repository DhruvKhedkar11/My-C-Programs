#include <stdio.h>

int rep(int *p, int*r);

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("*****************************************************\n");
    rep(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}