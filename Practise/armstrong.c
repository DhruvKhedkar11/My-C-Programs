#include <stdio.h>
int pows(int a, int b){
    int f=1;
    for(int i=1; i<=b; i++){
        f = f*a;
    }
    return f;
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
        ans = ans + pows(h,p);
        k = k/10;
    }
    
    if(ans==n){
        printf("Amstrong No.\n");
    }
    else{
        printf("Not Amstrong\n");
    }
    return 0;
}