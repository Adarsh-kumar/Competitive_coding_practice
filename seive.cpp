#include<iostream>
#include<vector>
using namespace std;
#define MAXN 450

vector <int> prime;
vector <int>::iterator itr;
bool is_composite[MAXN];
int lpf[MAXN];

//linear sieve to print all the prime numbers from 1 to n in O(n) time

void sieve (int n) {
	std::fill (is_composite, is_composite + n, false);
	for (int i = 2; i <n; ++i) {
		if (!is_composite[i]) 
{
prime.push_back (i);
lpf[i]=i;
}
		for (int j = 0; j < prime.size () && i * prime[j] < n; ++j) {
			is_composite[i * prime[j]] = true;
                        if(i==2||i==3)
{
                        lpf[i*prime[j]]=prime[j];
                        lpf[i]=i;
}
                        else
                        lpf[i*prime[j]]=prime[j];
			if (i % prime[j] == 0) break;
		}
	}
}

vector<int> prime_factors(int n)
{
vector<int> result;
while(n!=1)
{
result.push_back(lpf[n]);
n=n/lpf[n];
}
return result;
}


// lets write another function which stores the least prime factor of every number from 1 to n so that multiple queries can be handled 
// in case of calculating prime factro from 1 to n



int main()
{
int n;
int m;
cin>>n;
sieve(n);
//cout<<prime.size()<<endl;
//cin>>m;
for(int i=0;i<n;i++)
cout<<lpf[i]<<" ";
//for(int i=0;i<prime.size();i++)
//cout<<prime[i]<<" ";
//cout<<"it's 18th" <<lpf[25];
//vector <int> p = prime_factors(m);
 
   //for(int i=0;i<p.size();i++)
    //cout<<p[i]<<" ";
    return 0;
}


