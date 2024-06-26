int minimumOperations(int* nums, int numsSize) {
    int ops, total = 0;
    for(ops = 0; ops < numsSize; ops++) {
        if(nums[ops] % 3 == 0) continue;
        total++;
    }

    return total;
}
