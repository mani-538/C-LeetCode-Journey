int dominantIndex(int* nums, int numsSize)
{
    int largest_num = nums[0];
    int index = 0;

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] > largest_num)
        {
            largest_num = nums[i];
            index = i;
        }
    }

    for(int j = 0; j < numsSize; j++)
    {
        if(j != index && nums[j] * 2 > largest_num)
        {
            return -1;
        }
    }

    return index;
}