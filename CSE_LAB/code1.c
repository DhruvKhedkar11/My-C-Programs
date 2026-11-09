#include <stdio.h>

int main(){
    int n,sum,avg,a,x,y,p,q,z,h;
    int odd_count, even_count,positive,negative,zero;
    odd_count = 0;
    even_count = 0;
    sum = 0;
    positive = 0;
    negative = 0;
    zero = 0;
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

    for(a=0; a<n; a++){
        sum = sum + arr[a];
    }
    printf("Sum of Elements: %d\n", sum);
    printf("Average of Elements: %d\n", sum/n);

    for(a=0; a<n-1; a++){
        p = arr[a]; 
        q = arr[a+1];

        y = p>q?p:q ;
        x = x>y?x:y ;
    }
    printf("Lagest Element is: %d\n", x);

    for(a=0; a<n-1; a++){
        p = arr[a]; 
        q = arr[a+1];

        h = p<q?p:q ;
        z = z<h?z:h ;
    }
    printf("Smallest Element is: %d\n", z);

    for(a=0; a<n; a++){
        if(arr[a]%2==0){
            even_count++;
            //printf("All Even Elements: %d", arr[a]);
        }
        else{
            odd_count++;
            //printf("All Odd Elements: %d", arr[a]);
        }
    }
    printf("No. of Odd Elements: %d\n", odd_count);
    printf("No. of Even Elements: %d\n", even_count);
    
    for(a=0; a<n; a++){
        if(arr[a]>0){
            positive++ ;
        }
        else if(arr[a]==0){
            zero++ ;
        }
        else{
            negative++ ;
        }
    }
    printf("No. of Positive Elements: %d\n", positive);
    printf("No. of Negative Elements: %d\n", negative);
    printf("No. of Zero Elements: %d\n", zero);
    
    
    return 0;   
}