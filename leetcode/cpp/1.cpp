#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        for (int i=0; i<len; i++)
            for (int j=i+1; j<len; j++)
                if (nums[i]+nums[j]==target)
                    return {i,j};
        return {};
    }
};

int main()
{
    Solution soul;
    cout << "1" << endl;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target=9;
    vector ans=soul.twoSum(nums,target);
    cout << ans[0] << ans[1] << endl;
    system("pause");
    return 0;
}