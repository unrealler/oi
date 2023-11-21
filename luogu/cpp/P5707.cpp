#include <bits/stdc++.h>
using namespace std;
int main()
{
	double s,v;
	cin>>s>>v;
	int t=ceil(s/v);
	int h=8,m=0;
	t+=10;
	while(1)
	{
		if(m<t)
		{
			h-=1;
			m+=60;
		}
		if(h<=0)
		{
			h+=23;
		}
		if(m>=t)
		{
			m-=t;
			break;
		}
	}
	if (0<=h && h<=9)
		cout<<"0";
	cout<<h<<":";
	if (0<=m && m<=9)
		cout<<"0";
	cout<<m<<endl;
	return 0;
}
