#include<bits/stdc++.h>

using namespace std;

int main()
{
long long n,m;

cin>>n>>m;

long long min_team_size=n/m;

long long min_team=((min_team_size)*(min_team_size-1))/2;

if(n%m==0)
min_team*=m;

else
min_team*=(m-1);

min_team+=((n%m)*((n%m)-1))/2;


if(m==1)
{

cout<<min_team<<" "<<min_team;
return 0;

}


long long max_team_size=n-(m-1);

long long max_team=((max_team_size)*(max_team_size-1))/2;

if(min_team<max_team)
cout<<min_team<<" "<<max_team<<endl;
else
cout<<max_team<<" "<<min_team<<endl;

return 0;
}



