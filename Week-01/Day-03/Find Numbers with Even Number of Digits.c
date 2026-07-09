int findNumbers(int* nums, int numsSize) {
    int even_count = 0;

    for(int i = 0; i < numsSize; i++) {
        int duplicate = nums[i];
        int digit = 0;

        while(duplicate > 0) {
            duplicate = duplicate / 10;
            digit += 1;
        }

        if(digit % 2 == 0) {
            even_count += 1;
        }
    }

    return even_count;
}