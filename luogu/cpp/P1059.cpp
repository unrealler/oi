#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,cnt=0;
	cin>>n;
	int existed[1001]={0};
	for (int i=0;i<n;i++)
	{
		cin>>t;
		if (existed[t]!=0)
			continue;
		existed[t]=1;
		cnt+=1;
	}
	cout<<cnt<<endl;
	for(int i=0;i<=1000;i++)
	{
		if(existed[i])
			cout<<i<<" ";
	}
	return 0;
}
