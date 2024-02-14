/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int p,n,i;
    int flag = 0;
    for (i = 0, n = 0, p = 0; i < numsSize; i++) {
        if (i % 2 == 0) {
            while (p < numsSize) {
                if (nums[p] > 0) {
                    arr[i] = nums[p++];
                    break;
                }
                p++;
            }
        } else {
            while (n < numsSize) {
                if (nums[n] < 0) {
                    arr[i] = nums[n++];
                    break;
                }
                n++;
            }
        }
    }
    return arr;
}
