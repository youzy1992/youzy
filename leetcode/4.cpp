#include<stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int numsSize = nums1Size + nums2Size;
    int l[numsSize];
    int temp1 = 0;
	int temp2 = 0;
	int size1Temp = nums1Size;
	int size2Temp = nums2Size;
	double result;
    for(int i=0; i <= (numsSize/2+1);i++)
    {
    	if(size1Temp > 0 && size2Temp > 0)// 如果两个数组都没有结束 
    	{
    		if(nums1[temp1] <= nums2[temp2] )// 
    		{
    			l[i] = nums1[temp1];
    			temp1++;
    			size1Temp--;
			}
			else if (nums1[temp1] > nums2[temp2])
			{
				l[i] = nums2[temp2];
				temp2++;
				size2Temp--;
			}
		}
		else if( size1Temp == 0  &&  size2Temp > 0)
		{
			l[i] = nums2[temp2];
			temp2++;
		}
		else if( size1Temp > 0 &&  size2Temp == 0 )
		{
			l[i] = nums1[temp1];
    		temp1++;
		}
	}
	if( numsSize % 2 == 1)
	{
		 result = (double)l[numsSize/2];
		 return result;
	}
	else{
		result =  ((double)  (l[numsSize/2] + l[numsSize/2-1]))/2 ;
		return result;
	}
}


int main()
{
	double test;
	int nums1[] = {1,2};
	int nums2[] = {3,4};
	test =   findMedianSortedArrays(nums1, 2, nums2, 2);
	printf("%f",test);
	return 0;
}
