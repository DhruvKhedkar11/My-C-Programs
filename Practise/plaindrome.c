#include <stdio.h>
int main(){
    int n,a,b, rev;
    scanf("%d", &n);
    rev = 0;
    a = 1;
    b = n;
    
    while(n!=0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    printf("Rev= %d\n", rev);
    if(rev==b){
        printf("Plaindrome");
    }
    return 0;
}