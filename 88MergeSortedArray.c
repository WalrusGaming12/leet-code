void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    if(m>=n){
    for(int i=m;i<n+m;i++){
        nums1[i]=nums2[i-m];
        }
        for(int i=0;i<m+n;i++)
        printf("%d",nums1[i]);
        //sorting algo
        swap(nums1,m,n);
    return 0;
    }
    if(m==0){
        for(int i=n; i<n;i++){
            nums1[i]=nums2[i];
    }
    }
    if(m<n){
        for(int i=m; i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        swap(nums1,m,n);
    }

}
void swap(int *nums1,int m,int n){
    int temp=0;
    for(int i=0;i<m+n-1;i++){
        for(int j=i;j<m+n;j++){
        if(nums1[i]>nums1[j]){
            temp=nums1[i];
            nums1[i]=nums1[j];
            nums1[j]=temp;
        }
        }
    }
}