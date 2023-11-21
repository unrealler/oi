#include <bits/stdc++.h>
using namespace std;

int dancer_status(int n, int x, int y)
{
    if(n == 0)
        return 1;
    int half_size = pow(2, (n - 1));

    if(x < half_size and y < half_size)
        return 0;
    return dancer_status(n - 1, x % half_size, y % half_size);
}
    

int main()
{   
    int n, size, i, j, status;
    cin>>n;
    size = pow(2, n);

    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if((log(i+1) / log(2) + log(j+1) / log(2)) < n)
            {
                cout<<"0 ";
                continue;
            }
                
            status = dancer_status(n, i, j);
            cout<<status<<" ";
        }
        cout<<endl;
    }

    return 0;
}