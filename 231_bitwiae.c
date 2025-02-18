#include<stdbool.h>
#include <stdio.h>
bool isPowerOfTwo(int n) {
    long i=1;
    while(n>=i){
        if (i==n){
            return true;
        }
        i=i<<1;
    }
    return false;
}