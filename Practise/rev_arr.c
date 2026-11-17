#include <stdio.h>
int main(){
    int arr[] = {32,56,73,45,1,21,41,90,7};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int rev[n];

    for (int i=0; i<n; i++){
        rev[i] = arr[n-1-i];
    }

    for(int i=0; i<n; i++){
    printf("%d ", rev[i]);
    }
    printf("\n");
    return 0;
}