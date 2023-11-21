#include <iostream>
using namespace std;
int main()
{
	int apples[10], hand_height=0, cnt=0;
	const int chair=30;
	for(int i=0;i<=9;i++)
		cin>>apples[i];
	cin>>hand_height;
	for(int i=0;i<=9;i++)
		if(chair+hand_height>=apples[i])
			cnt++;

	cout<<cnt<<endl;
	return 0;
}
