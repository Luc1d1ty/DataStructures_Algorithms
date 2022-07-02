#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int gcd ( int a, int b ) {
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int main()
{
    fastio;
    
    int a , b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    return 0;
}   