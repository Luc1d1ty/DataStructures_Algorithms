#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ld long double
#define ll long long int
#define endl "\n"

using namespace std;

int main()
{
    fastio;
    ld x; 
    cin >> x ;

    cout << (ll)(round)(x*((1000.0*5280.0)/4854.0)) << endl;
    return 0;
}   