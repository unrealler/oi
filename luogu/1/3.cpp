#include <bits/stdc++.h>
#define N 15
using namespace std;

int s[N], b[N];
int n;
int s_sum = 1, b_sum = 0, min_sub = 32767;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>b[i];
        s_sum *= s[i];
        b_sum += b[i];
        min_sub = min(min_sub, abs(s_sum - b_sum));
    }

    int sub = abs(s_sum - b_sum);
    int s_new, b_new;

    for(int i=0;i<n;i++)
    {
        s_new = s_sum / s[i];
        b_new = b_sum - b[i];
        if(abs(s_new - b_new) < sub)
        {
            s_sum = s_new;
            b_sum = b_new;
        }
    }
    if(s_sum == 1 && b_sum == 0)
        cout<<min_sub<<endl;
    else
        cout<<sub<<endl;
    return 0;
}