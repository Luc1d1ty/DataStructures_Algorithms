#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    count = d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            count--;
        }
    }
    cout << count;
    return 0;
}