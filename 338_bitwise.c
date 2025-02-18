//A function to count the number of 1 in a number .
int counter (int n){
    int count =0;
    while (n){ //till n != 0
        count += (n&1);
        n=n>>1;
    }
    return count;
}
int* countBits(int n, int* returnSize) {
    int *arr = (int *) malloc(sizeof(int)* (n+1));//Create a new array dynaicly 
    *returnSize = n+1;
    for (int i =0; i<=n ; i++){
        arr[i] = counter(i);
    }
    return arr;
}