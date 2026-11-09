#include <stdio.h>
int main(){
    int n,i,a;
    scanf("%d", &n);
    a = 0;
    
    for(i=2; i<n; i++){
            if(n%i==0){
               a = 1;
               break;
            }
    }
    if(a==0){
        printf("Prime\n");
    }
    
    return 0;
}