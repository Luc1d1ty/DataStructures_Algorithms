#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int num, anton=0, danik=0;
    string s;
    cin >> num >> s;
    for (int i = 0; i < num; i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    cout << ((anton > danik) ? "Anton" : (danik > anton) ? "Danik" : "Friendship") << endl;
    return 0;
}