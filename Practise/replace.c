int rep(int *p, int *r){
    int temp;
    temp = *p;
    *p = *r ;
    *r = temp ;
    return 0;
}
