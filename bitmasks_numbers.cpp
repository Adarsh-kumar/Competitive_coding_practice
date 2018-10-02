#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()

{
int n;
cin>>n;
string p[n];

for(int i=0;i<n;i++)
cin>>p[i];
int m,m1,m2,j;
int cnt[1024];
int ans,i;
for (m = 0; m < (1 << 10); ++m) {
   cnt[m] = 0;
}
for (i = 1; i <= n; ++i) {
   string x = p[i];
   int mask = 0;
   for(j = 0; j < x.size(); ++j) {
     mask |= (1 << (x[j] - '0'));
   }
   cnt[mask] ++;
}

ans = 0;
for (m1 = 0; m1 < (1 << 10); ++m1) {
   for (m2 = m1; m2 < (1 << 10); ++m2) {
      if ((m1 | m2) == 1023) {
         if( m1 == m2 ) {
            ans += (cnt [m1] * (cnt [m1] - 1) ) / 2;
         } else {
             ans += (cnt [m1] * cnt [m2]);
         }
      }
   }
}

cout<<ans<<endl;

return 0;
}



