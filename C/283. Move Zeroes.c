void moveZeroes(int* nums, int numsSize) {
    int i, j = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 0)
            continue;
        else
            nums[j++] = nums[i];
    }
    while (j < numsSize)
        nums[j++] = 0;
}
