#include <stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n,x,p,ans,h=0,k;
    scanf("%d", &n);
    x = n;
    p = 0;
    k = n;
    ans = 0;
    
    while(x!=0){
        p++;
        x = x/10;
    }
    printf("The Order is: %d\n", p);
    
    for(int i=0; i<p; i++){
        h = k%10;
        ans = ans + fact(h);
        k = k/10;
    }
    
    if(ans==n){
        printf("Strong No.\n");
    }
    else{
        printf("Not Strong\n");
    }
    return 0;
}