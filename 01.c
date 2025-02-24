#include<stdio.h>
#include<stdlib.h>

 int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr= (int *) malloc(sizeof(int)* numsSize);
    *(returnSize)=0;

    for (int i =0 ; i<numsSize; i++ ){
        int new_target = target -nums[i ];
        for (int j = i+1; j<numsSize; j++){
            if (nums[j]==new_target){
                arr[(*returnSize)++] = i;
                arr[(*returnSize)++] = j;
                break;
            }
        }
    }
    return arr;
}
int main(){
    int numsSize;
    printf("Entert the size : ");
    scanf("%d",&numsSize);
    printf("Enter the element of array : ");
    int nums[numsSize];
    for (int i = 0 ; i<numsSize ; i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the target : ");
    int target = 9;
    scanf("%d",&target);

    int returnSize = 0;
    int * arr= twoSum(nums,numsSize,target,&returnSize);
    printf("Then size of return is : %d\n",returnSize);
    printf("The element of array are : ");
    for (int i = 0; i<numsSize ; i++){
        printf("%d ",nums[i]);
    }
    printf("The element of array are : ");
    for (int i = 0; i<returnSize ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}