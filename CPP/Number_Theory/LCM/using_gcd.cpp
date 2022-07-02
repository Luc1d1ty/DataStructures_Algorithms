#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// using function ...
/* 
int gcd ( int a, int b ) {
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int lcm ( int a, int b ) {
    return ( a * b ) / gcd ( a, b );
}
 */

int main()
{
    fastio;
    int a , b  ;
    cin >> a >> b;
    int gcd = 0 , lcm = 0;
    int tempA = a , tempB = b;
    while (b){
        a = a % b;
        swap(a,b);
    }
    gcd = a;
    lcm = (tempA*tempB)/gcd; 
    cout << "GCD = " <<gcd<< " And LCM = " << lcm ;
    
    return 0;
}