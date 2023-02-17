#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;

    int firstRes = 2 * t1 + s * v1;
    int secondRes = 2 * t2 + s * v2;

    if (firstRes < secondRes)
    {
        cout << "First";
    }
    else if (firstRes > secondRes)
    {
        cout << "Second";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}