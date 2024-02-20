int findDuplicate(int* nums, int numsSize) {
    int n[100001]={0};
    for(int i=0;i<numsSize;i++)
        if(n[nums[i]]++ ==1) return nums[i];
    return 0;
}
