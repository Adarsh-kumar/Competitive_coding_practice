#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p=1,k=0;cin>>n>>m;
	if(n>m+1||n*2+2<m){cout<<"-1";return 0;}
	while(n || m){if(!p || (m>n&&k<2))--m,p=1,++k;else--n,p=0,k=0;cout<<p;}
	cout<<endl;return 0;
}
