#include<iostream>
#include<vector>

using namespace std;

class Need {
	public:
		int need = 10;
		int first = -1;
};

class Solution {
public:
	bool searchAndPush(vector<Need>& tmp,int val,int num, Need &temp,int target)
	{
		for(int i = 0; i < tmp.size(); i++){
			if(tmp[i].need == val){//ÕÒµ½´ð°¸ 
				temp.first = tmp[i].first;
				return true;
			}
		}
		Need k;
		k.first = num;
		k.need = target - val;
		tmp.push_back(k);
		return false;
	}
    vector<int> twoSum(vector<int>& nums, int target) 
	{
    	vector<int> ret;
    	vector<Need> tmp;
    	Need temp;
    	temp.first = -1;
    	for (int i = 0; i < nums.size(); i++ ){
    		
    			if(searchAndPush(tmp,nums[i],i,temp,target)){
    				ret.push_back(temp.first);
    				ret.push_back(i);
    				return ret;
				}
			
		}
    	
    	ret.push_back(100000);
    	ret.push_back(100000);
        return ret;
    }
};

int main()
{
	vector<int> test{-2,111,2,13};
	vector<int> ret;
	Solution s;
	ret = s.twoSum(test,0);
	cout << ret[0] << "," << ret[1] << endl;
	return 0;
}
