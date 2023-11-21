#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,cnt=0;
	cin>>n;
	
	for(int i=2;i<=int(sqrt(n));i++)
	{
		if(n%i==0)
		{
			cout<<n/i<<endl;
			break;
		}
	}
	return 0;
}
