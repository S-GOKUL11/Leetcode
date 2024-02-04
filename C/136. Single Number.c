int singleNumber(int* nums, int numsSize) {
    // Initialize the unique number
    int uniqNum = 0;
    // Traverse all elements through the loop
    for (int i = 0; i < numsSize; i++) {
        // Concept of XOR
        uniqNum = uniqNum ^ nums[i];
    }
    return uniqNum; // Return the unique number
}
