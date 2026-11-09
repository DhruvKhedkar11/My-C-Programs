#include <stdio.h>
int main() {
    int n,target,sum,found;
    scanf("%d", &n);
    int arr[n];
    int result[2];
    found = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for(int i=0; i<n; i++){
        for(int a=0; a<i; a++){
           sum = arr[i] + arr[a] ;
           
           if(sum==target){
            result[0] = a;
            result[1] = i;
            found = 1;
            break;
           }
        }
        if(found==1){
            break;
        }
    }
    printf("[%d,%d]",result[0],result[1]);
    return 0;
}