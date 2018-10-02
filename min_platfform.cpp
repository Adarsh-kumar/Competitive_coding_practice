#include<bits/stdc++.h>
using namespace std;

int platform_needed(int arv[],int dept[],int n)
{
sort(arv,arv+n);
sort(dept,dept+n);

int result=1,platform=1;
int i=1,j=0;

while(i<n&&j<n)
{
if(arv[i]<dept[j])
{
platform++;
i++;
if(result<platform)
result=platform;
}
else
{
platform--;
j++;
}
}


return result;
}
int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
