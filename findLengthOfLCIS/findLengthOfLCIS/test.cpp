#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
	int findLengthOfLCIS(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		int ret = 1;
		int count = 1;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] < nums[i + 1])
				count++;
			else
				count = 1;
			ret = max(ret, count);
		}
		return ret;
	}
};

int main()
{
	vector<int> nums = { 1,3,5,4,7 };
	cout << Solution().findLengthOfLCIS(nums) << endl;
	return 0;
}