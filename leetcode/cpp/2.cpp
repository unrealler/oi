#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        else if (x==0) {
            return true;
        }
        else {
            string s=to_string(x);
            int len=s.length();
            for(int i=0;i<=int(len/2+1);i++)
                if (s[i]!=s[len-i-1])
                    return false;
            return true;
        }

    }
};

int main()
{
    Solution soul;
    cout<<soul.isPalindrome(0)<<endl;
    return 0;
}