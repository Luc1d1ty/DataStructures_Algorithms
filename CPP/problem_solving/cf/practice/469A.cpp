#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int maxRound, x, y;
    string res = " ";

    set<int> rounds;

    cin >> maxRound >> x;
    while (x--)
    {
        int valX;
        cin >> valX;
        rounds.insert(valX);
    }
    cin >> y;
    while (y--)
    {
        int valY;
        cin >> valY;
        rounds.insert(valY);
    }

    for (int i = 1; i <= maxRound; i++)
    {
        if (rounds.count(i))
        {
            res =  "I become the guy.";
        }
        else
        {
            res = "Oh, my keyboard!";
            break;
        }
    }
    cout << res;
    return 0;
}