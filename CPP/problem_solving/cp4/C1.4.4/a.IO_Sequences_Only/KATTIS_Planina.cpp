#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int
#define endl "\n"

using namespace std;

int main()
{
    fastio;
    ll n;
    cin >> n;
    cout << (ll)((pow(2,n)+1)*(pow(2,n)+1)) << endl;
    return 0;
}       