//This code is the solution for the codechef problem Say No To Drugs :- https://www.codechef.com/CDMN21B/problems/NODRUGS/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<int, int> m;
    while (t--)
    {
        int n, k, l, z = 0, y = 0;
        cin >> n >> k >> l;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        if (k <= 0)
        {
            for (int i = 0; i < n; i++)
            {
                z = max(z, s[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (z == s[i])
                    y++;
            }
            if (z == s[n - 1] && y == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else{
            s[n-1]+=((l-1)*k);
              for (int i = 0; i < n; i++)
            {
                z = max(z, s[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (z == s[i])
                    y++;
            }
            if (z == s[n - 1] && y == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
