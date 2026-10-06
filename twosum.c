int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res = (int*)malloc((*returnSize = 2) * sizeof(int));
    for (int i = 0; i < numsSize; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] + nums[j] == target) return (res[0] = i, res[1] = j, res);
    return *returnSize = 0, NULL;
}
