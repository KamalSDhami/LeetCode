int hammingWeight(int n) {
    int count =0;
    while(n){
        if (n&1){ //if last bit is 1
            count++;
        }
        n=n>>1;
    }
    return count;
}