#include <iostream>
using namespace std;
int main()
{
	int a=5,b=0,c=1;
	cout<<(a||(b+=c))<<endl;
	cout<<a<<" "<<b<<" "<<c<<endl;
	int x;
	cout<<(bool(x=1))<<endl;
	return 0; 
}
