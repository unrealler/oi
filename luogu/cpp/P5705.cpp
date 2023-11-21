#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	cin>>n;
	int m_n=n*10;
	
	for(int i=1;i<=4;i++)
	{
		cout<<(m_n%10);
		m_n/=10;
		if(i==1)
			cout<<".";
	}
	
	return 0;
}
