#include <iostream>
using namespace std;
int main()
{
	int l, m;
	cin>>l>>m;
	int tree[l+1]={0};
	//cout<<tree[0]<<tree[1]<<tree[2]<<endl;
	int start, end;
	for(int i=0;i<m;i++) {
		cin>>start>>end;
		for(int j=start; j<=end; j++) {
			tree[j]=1;
		}
	}
	int cnt=0;
	for(int k=0;k<=l;k++) {
		if(tree[k]!=1) {
			cnt+=1;
		}
	}
		
	cout<<cnt<<endl;
	return 0; 
}
