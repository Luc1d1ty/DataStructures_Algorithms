#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int toRepeat , groups = 0;
    string temp = " " ;
    cin >> toRepeat;
    while(toRepeat--){
        string mag;
        cin >> mag;
        if(mag != temp){
            groups++;
        }
        temp = mag;

    }

    cout << groups;
    return 0;
}   