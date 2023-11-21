#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k=6, sum=0;
    // cin>>k;
    int medal_per_day = 1, cur_day = 1;
    while(1)
    {
        sum += medal_per_day * medal_per_day;
        
        cur_day += cur_day;
        if(cur_day >= k)
            break;
        medal_per_day++;
    }
    sum += (medal_per_day + 1) * (k-cur_day);
    cout<<sum<<endl;
    return 0;
}