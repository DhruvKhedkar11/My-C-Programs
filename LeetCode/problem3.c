struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    long long int a,b,ans,x,p=0;
    a = 0;
    b = 0;

    long int len1 = sizeof(l1)/sizeof(l1[0]);
    for (int i=0; i<=len1; i++){
        a = a*10 + l1[i] ;
    }

    long int len2 = sizeof(l2)/sizeof(l2[0]);
    for (int i=0; i<=len2; i++){
        b = b*10 + l2[i] ;
    }

    ans = a+b;
    x = ans;
    while(x!=0){
        p++;
        x = x/10;
    }
    

    struct ListNode* l3
    {
        for(int i=0; i<=p; i++){
            len[i] = ans % 10;
        }
    }
    return l3;
}