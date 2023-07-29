int removeDuplicates(int* nums, int numsSize){
    int counter=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i]!=nums[counter]){
            counter++;
            nums[counter]=nums[i];
        }
    }
    return counter+1;
}