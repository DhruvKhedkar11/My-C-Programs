#include <stdbool.h>

bool isPalindrome(int x){
    int a,rev=0;
    int b=x ;

    if(x>=0){
        while(x!=0){
            a = x%10;
            rev = rev*10 + a ;
            x = x/10 ;
        }
        if(rev==b){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}