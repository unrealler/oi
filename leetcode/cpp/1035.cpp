#include <iostream>
using namespace std;
int main() 
{
	float i,  k;
	double sum=0;
	cin>>k;
	for(i=1;;i++) {
		
		sum+=(1/i);
		//cout<<i<<" "<<sum<<endl;
		if (sum>k) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
