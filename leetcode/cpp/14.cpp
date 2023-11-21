#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1)
        {
            return strs[0];
        }
        char ch;
        int idx = 0;
        while(1)
        {
            ch = strs[0][idx];
            for(int i = 1; i < strs.size(); i++)
            {
                if(strs[i][idx] != ch)
                {
                    return strs[i].substr(0, idx);                    
                }
            }
            idx += 1;
        }

    }
};

int main()
{
    Solution solution;
    vector<string> strs={"",""};
    
    string output = solution.longestCommonPrefix(strs);

    cout<<output<<endl;
    return 0;
}