#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,p,s;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<setprecision(1)<<fixed<<s<<endl;
	return 0;
}
