void moveZeroes(int* nums, int numsSize)
{
    int index = 0;

    // Keep all non-zero numbers
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    // Fill remaining positions with zeros
    while(index < numsSize)
    {
        nums[index] = 0;
        index++;
    }
}