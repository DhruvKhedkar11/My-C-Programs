#include <stdio.h>
#define MAX_LENGTH 50
int main() {
    int arr[MAX_LENGTH] = {0};
    int *p , *q ;
    int temp,n;
    printf("Enter no. of Entries: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n/2; i++)
    {
        p=&arr[i];
        q=&arr[n-1-i];
        temp=*p;
        *p=*q;
        *q=temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}