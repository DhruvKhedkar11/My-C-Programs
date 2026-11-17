#include <stdio.h>
int main(){
    int n,x,p=0,found=1,z;
    scanf("%d", &n);
    x = n;

    while(x!=0){
        p++;
        x = x/10;
    }
    
    int num[p];

    for(int i=0; i<p; i++){
        num[i] = n%10;
        n = n/10;
    }
    for(int i=0; i<p; i++){
        printf("%d ", num[i]);
    }
    printf("\n");

    for(int i=0; i<p; i++){
        for(int a=0; a<i; a++){
            if(num[a]==num[i]){
                z = num[a];
                found++;
            }
        }
    }
    printf("No. of times %d Occured: %d\n", z,found);
    return 0;
}