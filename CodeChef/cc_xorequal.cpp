//This is the code for codechef problem Xor Equal :- https://www.codechef.com/SEPT21A/problems/PALINT

#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, p;
        cin >> n >> x;
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            m1[p]++;
            m2[p] = 1;
        }
        if (n == 1)
        {
            cout << "1"
                 << " "
                 << "0" << endl;
            continue;
        }
        int ans = 0;
        int chng = 0;
        for (auto itr : m1)
        {
            if (itr.second == n)
            {
                ans = n;
                break;
            }
            if (itr.second >= ans)
            {
                ans = itr.second;
            }
        }
        if (x == 0)
        {
            cout << ans << " " << chng << endl;
        }
        for (auto itr : m1)
        {
            if (m2[(itr.first) ^ x] == 1)
            {
                if (itr.second + m1[(itr.first) ^ x] > ans)
                {
                    ans = itr.second + m1[(itr.first) ^ x];
                    chng = min(itr.second, m1[(itr.first) ^ x]);
                }
                else if (itr.second + m1[(itr.first) ^ x] == ans)
                {
                    if (min(itr.second, m1[(itr.first) ^ x]) < chng)
                    {
                        chng = min(itr.second, m1[(itr.first) ^ x]);
                    }
                }
            }
        }
        cout << ans << " " << chng << endl;
    }
    return 0;
}
