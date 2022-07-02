// Idk why I did this but it works

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a = 21, b = 6;


    // for example a = 21 . its multiples are : 21, 42, 63, 84, 105, 126, 147, 168, 189 ...
    // for b = 6 ; its multiplies are : 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96, 102, 108, 114, 120, 126...

    // common multiples of 21 and 6  are : 42 , 84 , 126 , 168 , 210 ...

    // smallest number is 42 , so the LCM of 21 and 6 is 42 .


    int aa[500];
    int ba[500];
    vector<int>common;


    for (int i = 0; i < 500; i++)
    {
        aa[i] = a * (i + 1);
    }
    for (int i = 0; i < 500; i++)
    {
        ba[i] = b * (i + 1);
    }
    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            if (aa[i] == ba[j])
            {
                common.push_back(aa[i]);
                continue;
            }
        }
    }

    cout << common[0];
}