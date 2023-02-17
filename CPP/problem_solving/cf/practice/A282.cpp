#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int numOfTestCases, res = 0;
    cin >> numOfTestCases;
    while (numOfTestCases--)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
        {
            ++res;
        }
        else if (s[0] == '-')
        {
            --res;
        }
        else if (s[0] == 'X')
        {
            if (s[1] == '+')
            {
                res++;
            }
            else if (s[1] == '-')
            {
                res--;
            }
        }
    }
    cout << res;
    return 0;
}