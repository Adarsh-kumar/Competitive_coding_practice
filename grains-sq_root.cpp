#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
int main()
{
ios::sync_with_stdio(false);cin.tie(0);
	lli i,n,k;
	cin>>n>>k;
	if(n<=k){
		cout<<n;
		return 0;
	}
	lli diff=2*(n-k);
	lli t=sqrt(diff);
	while(1){
		if(t*(t+1)>=diff)
			break;
		++t;
	}
	cout<<t+k;
}
