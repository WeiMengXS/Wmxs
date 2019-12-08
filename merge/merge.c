void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
if(nums1Size==0)
{return 0;}
int i=m,j=n,tmp=0;
int num=m+n;
for(j=0;j<n;j++)
{
    nums1[i+j]=nums2[j];
}
    while(num--)
{
for(size_t k=0;k<m+n-1;k++)

{	
    if(nums1[k]>nums1[k+1])
    {
        tmp=nums1[k+1];
        nums1[k+1]=nums1[k];
        nums1[k]=tmp;
    }
}

}
}


