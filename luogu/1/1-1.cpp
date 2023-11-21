#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k;
    
    cin >> k;

    int sum = 0;
    int current_number = 1;
    int count = 0;

    while (count < k) 
    {
        for (int i = 0; i < current_number; ++i) 
        {
            sum += current_number;
            ++count;
            if (count >= k)
                break;
        }
        current_number++;
    }

    cout<<sum<<endl;

    return 0;
}
