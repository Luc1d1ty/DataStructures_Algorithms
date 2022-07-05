/* 
Codeforces Beta Round #17 ,
problem : A. Noldbach problem
 */


#include <bits/stdc++.h>

#define endl "\n"

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

#define V vector

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

void solve()
{
    int uptoRange, atLeast;
    cin >> uptoRange >> atLeast;

    V<int> v(uptoRange + 1, 1);

    v[0] = 0;
    v[1] = 0;

    for (int i = 2; i <= sqrt(uptoRange); i++)
    {
        if (v[i] == 1)
        {
            for (int j = i * 2; j <= uptoRange; j += i)
            {
                if (v[j] != 0)
                {
                    v[j] = 0;
                }
            }
        }
    }

    V<int> oP;

    for (int i = 0; i <= uptoRange; i++)
    {
        if (v[i] == 1)
        {
            oP.push_back(i);
        }
    }
    int cntr = 0;

    for (int i = 0; i < oP.size() - 1; i++)
    {
        for (int j = 2; j < oP.size(); j++)
        {

            if (oP[i] + oP[i + 1] + 1 == oP[j])
            {
                cntr++;
            }
        }
    }

    (cntr >= atLeast) ? cout << "Yes" << endl : cout << "No" << endl;
}

int main(void)
{

    fastio;
    solve();
}