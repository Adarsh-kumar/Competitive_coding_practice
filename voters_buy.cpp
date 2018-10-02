#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;

vector<int> arr;
map<int ,int> voters;

int max_votes_others=INT_MIN;

int votes=0;
for(int i=0;i<n;i++)
{

int id;

long long money;

cin>>id>>money;

voters[id]++;

if(id!=1)
{
max_votes_others=max(max_votes_others,voters[id]);
arr.push_back(money);
}

if(id==1)
votes++;

}

sort(arr.begin(),arr.end());


//v builfign 


cout<<endl;

int diff=max_votes_others-votes+1;

vector<int> temp;
temp.push_back(INT_MAX);

vector<int> max_vote_vector(arr.begin()+(arr.size()-max_votes_others),arr.end());

vector<int> other_votes(arr.begin(),arr.begin()+arr.size()-max_votes_others+1);

std::reverse(max_vote_vector.begin(),max_vote_vector.end());

std::reverse(other_votes.begin(),other_votes.end());



int p1=other_votes.size();

int p2=max_vote_vector.size();


int m_v_v[p2+1];
int o_v_v[p1+1];

m_v_v[0]=INT_MAX;

o_v_v[0]=INT_MAX;

for(int i=0;i<p1;i++)
o_v_v[i+1]=other_votes[i];

for(int i=0;i<p2;i++)
m_v_v[i+1]=max_vote_vector[i];

cout<<"mvv"<<endl;
for(int i=0;i<=p1;i++)
cout<<m_v_v[i]<<" ";

int dp[diff+1][p1+1][p2+1];

memset(dp,-1,sizeof(dp));

for(int i=1;i<=p1;i++)
{
for(int j=1;j<=p2;j++)
{
dp[1][i][j]=min(m_v_v[j],o_v_v[i]);
cout<<dp[1][i][j]<<endl;
}
}


if(diff<2)
{
cout<<min(m_v_v[1],o_v_v[1]);
}

else
{

for(int i=2;i<=diff;i++)
{
for(int j=1;i<=p1;i++)
{
for(int k=1;j<=p2;j++)
{
dp[i][j][k]=min(dp[i-1][j-1][k]+o_v_v[j],dp[i-2][j][k-1]+m_v_v[k]);

}

}
}

cout<<endl;
cout<<"dp running"<<endl;
cout<<dp[1][p1-1][p2-1]<<endl;

}


return 0;
}




