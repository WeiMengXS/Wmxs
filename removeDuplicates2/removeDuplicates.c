int removeDuplicates(int* nums, int numsSize){

if(numsSize==0)
{return 0;}
else if(numsSize==1)
    {return 1;}



int j=1;
int i=0;
int n=0;
for(j=0;j<numsSize;j++)////
{
if(nums[i]!=nums[j] )//¼ì²é
{
    i++;
    nums[i]=nums[j];
    n++;
}

}
return i+1;
}



