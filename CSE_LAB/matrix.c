#include <stdio.h>
int main(){
    const int r,c;
    int sum=0,lar=0,sml,rsum=0,csum=0;
    int x,y,p=1,q=1;
    int even=0, odd=0,a;
    printf("Enter no. of Rows and Columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("***************************************************************************************\n");
    printf("------Enter Elements of matrix------\n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("***************************************************************************************\n");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum += mat[i][j];
        }
    }
    printf("Sum of all Elements: %d\n", sum);

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            x = mat[i][j];
            lar = x>lar ? x:lar;
        }
    }
    sml = mat[0][0];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            y = mat[i][j];
            sml = y<sml ? y:sml;
        }
    }
        printf("Largest Element: %d\n", lar);
        printf("Smallest Element: %d\n", sml);
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            rsum += mat[i][j];
        }
        printf("Sum of Row %d: %d\n",p, rsum);
        rsum = 0;
        p++;
    }
    for(int j=0; j<c; j++){
        for(int i=0; i<r; i++){
            csum += mat[i][j];
        }
        printf("Sum of Column %d: %d\n",q, csum);
        rsum = 0;
        q++;
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            a = mat[i][j];
            if(a%2==0){
                even++;
            }
            else {
                odd++;
            }
        }
    }
    
    printf("Even Elements: %d\n", even);
    printf("Odd Elements: %d\n", odd);

    return 0;
}