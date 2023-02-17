#include <bits/stdc++.h>
using namespace std; //
#define ll long long
#define pb push_back
#define cinarr                  \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define cint \
    int t;   \
    cin >> t;

void def()
{

    string xxy, yy;
    cin >> xxy;
    cin >> yy;
    int xxya = xxy.size(), ya = 0;
    for (int i = 0; i < yy.size(); i++)
    {
        if (yy[i] == 'a')
            ya++;
    }
    if (yy.size() == 1 && yy[0] == 'a')
        cout << 1 << endl;
    else
    {
        if (ya > 0 && yy.size() > 1)
            cout << -1 << endl;
        else
        {
            if (yy.size() == 1 && xxy.size() == 1 && xxy != yy)
            {
                cout << 2 << endl;
            }
            else
            {
                ll answer = (1ll << xxy.size());
                cout << answer << endl;
            }
        }
    }
}

int main()
{
    cint;
    while (t--)
    {
        def();
    }

    return 0;
}