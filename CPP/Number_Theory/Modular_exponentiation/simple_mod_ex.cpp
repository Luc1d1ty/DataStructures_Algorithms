// x^y % m

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int modEx(int x, int n, int m)
{

    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int powr = pow(x, n / 2);
        return ((powr % m) * (powr % m)) % m;
    }
    else
    {
        int powr = pow(x, n - 1);
        return ((x % m) * (powr % m)) % m;
    }
}

int main()
{
    fastio;
    int x, y, m;
    cin >> x >> y >> m;
    cout << modEx(x, y, m) << endl;

    return 0;
}