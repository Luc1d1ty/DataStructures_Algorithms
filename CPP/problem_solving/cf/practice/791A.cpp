#include <bits/stdc++.h>

#define fastio\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a , b,res=0;
    cin >> a >> b;
    if (a>b){
        cout << 0;
        return 0;
    }
    while (1){
        if (a>b){
            break;
        }
        else {
            a*=3;
            b*=2;
            res++;
        }
    }
    cout << res;
    return 0;
}   