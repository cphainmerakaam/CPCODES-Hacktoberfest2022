// This is the code for codechef problem Minimize Digit Sum :- https://www.codechef.com/SEPT21A/problems/MNDIGSUM

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int ans = 0;
        int temp = n;
        int sum = INT_MAX;
        for (int i = r; i >= l; i--)
        {
            if (r > n && n % i == 0)
            {
                ans = i;
            }
            else
            {
                int k = 0;
                temp = n;
                while (temp > 0)
                {
                    k = k + temp % i;
                    temp = temp / i;
                }
                if (k < sum)
                {
                    sum = k;
                    ans = i;
                }
                if (sum == 1)
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
