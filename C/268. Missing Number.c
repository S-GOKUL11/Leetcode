int missingNumber(int* nums, int numsSize) {
    int n=0;
    for(int i=0;i<numsSize;i++)
       n=n+nums[i];
    int total=(numsSize*(numsSize+1))/2;
    return total-n;
}
