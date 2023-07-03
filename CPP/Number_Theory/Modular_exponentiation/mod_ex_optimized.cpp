// x^y % m

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define endl "\n"
#define ll long long

using namespace std;

ll modEx(int x, int n, int m)
{
    if (n == 0)
    {
        return 1;
    }

    x = x % m;

    ll result = 1;

    while (n > 0)
    {
        if (n % 2)
        {
            result = (result * x) % m;
        }
        x = (x * x) % m;
        n /= 2;
    }

    return result;
}

int main()
{
    fastio;

    int x, n, m;

    cin >> x >> n >> m;

    cout << modEx(x, n, m) << endl;
    return 0;
}