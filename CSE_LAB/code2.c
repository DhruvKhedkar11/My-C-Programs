#include <stdio.h>

int main(){
    int n,x,y,z,a,b,count;
    count = 0;
    printf("Enter no. of Elements: ");
    scanf("%d", &n);
    
    int arr[n];

    for(int i=0; i<=n-1; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<=n-1; i++){
        printf("%d \n",arr[i]);
    }

    printf("Enter Number to Search: ");
    scanf("%d", &x);

    for(a=0; a<n-1; a++){
       if(arr[a]==x){
        count++;
       }
    }
    printf("Total Searches are: %d\n", count);

    for(a=0; a<n-1; a++){
       if(arr[a]==x){
        printf("First found at Index: %d\n", a);
        break;
       }
    }


    return 0;
}