#include <stdio.h>
int peakIndexInMountainArray(int* arr, int arrSize){
    if(arrSize<3){
        return 0;
    }
    int count=0;
    int largest=arr[0];
    int placeLargest=0;
    for(int i=0;i<arrSize-1;i++){
        if(largest<arr[i]){
            largest=arr[i];
            placeLargest=i;}
        if(placeLargest==arrSize-1)
            return 0;
    }
    for(int i=1;i<placeLargest;i++){
        if(arr[i]<arr[i-1])
            return 0;
    }
    for(int i=placeLargest+1;i<arrSize;i++){
        if(arr[i]>arr[i-1])
            return 0;
    }
    return placeLargest;
}
int main(){
    int arr[3]={0,1,0};
    int a=peakIndexInMountainArray(arr,3);
    printf("result %d",a);
}