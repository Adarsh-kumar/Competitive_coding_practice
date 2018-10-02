#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
 
inline __int64 get_sum(const vector<__int64> &sum, int l, int r)
{
        return (l == 0) ? sum[r] : (sum[r] - sum[l - 1]);
}
 
int main()
{
        int n, k;
        scanf("%d %d", &n, &k);
        vector<__int64> a(n), sum(n);
        scanf("%I64d", &a[0]);
        sum[0] = a[0];
        for (int i = 1; i < n; ++i)
        {
                scanf("%I64d", &a[i]);
                sum[i] = sum[i - 1] + a[i];
        }

        //pair to store the index of the subsegments 
        pair<int, int> ans = make_pair(n - 2 * k, n - k);
        //ans which will be compared
        __int64 ans_sum = get_sum(sum, n - 2 * k, n - k - 1) + get_sum(sum, n - k, n - 1);
        
        pair<int, __int64> suff_max = make_pair(n - k, get_sum(sum, n - k, n - 1));
       
 for (int i = n - 2 * k - 1; i >= 0; --i)
        {
                __int64 cur = get_sum(sum, i + k, i + 2  * k - 1);

                if (cur >= suff_max.second)
                        suff_max = make_pair(i + k, cur);
                cur = get_sum(sum, i, i + k - 1) + suff_max.second;
                if (cur >= ans_sum)
                {
                        ans_sum = cur;
                        ans = make_pair(i, suff_max.first);
                }


        }
        printf("%d %d\n", ans.first + 1, ans.second + 1);
        return 0;
}
