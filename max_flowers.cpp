#include <bits/stdc++.h>

using namespace std;

int main()
{
long long arr[3];
cin>>arr[0]>>arr[1]>>arr[2];

sort(arr,arr+3);

int l=0;

cout<<arr[0]+(arr[1]-arr[0])/3+(arr[2]-arr[0])/3<<endl;

return 0;
}




