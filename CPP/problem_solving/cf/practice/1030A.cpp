#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int toRepeat;
    bool res = true;
    cin >> toRepeat;
    while(toRepeat--){
        bool value;
        cin >> value;
        if(value){
            res = false;
        }
        
    }
    cout << (res ? "EASY" : "HARD");
    return 0;
}   