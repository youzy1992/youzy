#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
/*	bool compareVector(vector<int>& num1 , vector<int>& num2){
		if(num1.size() != num2.size()){
			return false;
		}
		else{
			for(int i=0;i < num1.size() ; i++){
				if(num1[i] == num2[i]){
					continue;
				}
				else{
					return false;
				}
			}
			return true;//相等返回true 
		}
	}
	
	bool compareVectorFromVector(vector<vector<int> >& nums1 , vector<int>& nums2)
	{
		for(int i=0;i< nums1.size();i++){
			if( compareVector(nums1[i],nums2) )
			return true;//相等返回true 
		}
		return false;
	}
*/	
       vector<vector<int> > subsetsWithDup(vector<int>& nums) {
         vector<vector<int> > result;// = {{}};这个还是要的； 
        sort(nums.begin(),nums.end());

         for(int i=0; i<nums.size();){
            int count = 0;  
            while(count + i<nums.size() && nums[count+i]==nums[i]) 
				count++;
            int rsize = result.size();
            for(int k=0; k<rsize; k++){
                vector<int> temp = result[k];
                for(int j=0; j<count; j++){
                    temp.push_back(nums[i]);
                    result.push_back(temp);
                }
            }
            i = i + count;
        }
        return result;
    }
};





int main(){
	vector<vector<int> > vv;
	Solution s;
	int b[] = {1,2,3};
	vector<int> a(b,b+3);
	vv = s.subsetsWithDup(a);
	cout << 1<<endl;
	
}
