#include <stdio.h>

int sum(int n){
    int a,b,c;
    a=0;
    b=1;
    if(n==1 || n==0){
        return 0;
    }
    
    for(int i=1; i<n; i++){
    c=a+b;
    a=b;
    b=c;
    }
    
    return a + sum(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Sum of Fibonacci: %d\n", sum(n));
    return 0;
}