int removeElement(int* nums, int numsSize, int val){
    int counter=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]==val){
            counter++;
        }
    }
    counter=numsSize-counter;
    int temp=0;
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1;j<numsSize; j++){
            if(nums[i]==val){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    return counter;
}
