#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t, n, i, j;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        ll v = 0;
        for (i = 0; i < n; i++)
        {
            v += int(s[i] - 'a');
            v++;
        }
        if (n % 2 == 0)
        {
            cout << "Alice " << v << "\n";
        }
        else
        {
            ll v1 = v - int(s[0] - 'a') - 1;
            ll v2 = v - int(s[n - 1] - 'a') - 1;
            ll v3 = max(v1, v2);
            // cout<<v<<" "<<v1<<" "<<v2<<" "<<v3<<"\n";
            ll rem = v - v3;
            if (v3 > rem)
            {
                cout << "Alice " << v3 - rem << "\n";
            }
            else
            {
                cout << "Bob " << rem - v3 << "\n";
            }
        }
    }
}
