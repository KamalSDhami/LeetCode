int missingNumber(int* nums, int numsSize) {
        int xor_all=numsSize,xor_nums=0,i;
        for (i =0;i<numsSize;i++){
            xor_all ^= i;
            xor_nums ^= nums[i];
        }
        return xor_all ^ xor_nums;
    }
