int maxProduct(int* nums, int numsSize) {
    int maxi = 0;
    for(int i=0 ; i<numsSize ; i++){
        for(int j=0 ; j<numsSize ; j++){
            if(j != i){
                if((nums[i]-1)*(nums[j]-1) > maxi){
                    maxi = (nums[i]-1)*(nums[j]-1);
            }
         }
        }
    }
    return maxi;
}