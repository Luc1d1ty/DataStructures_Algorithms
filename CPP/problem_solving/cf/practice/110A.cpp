#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}