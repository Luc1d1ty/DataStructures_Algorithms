#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int rooms , okToLive = 0;
    cin >> rooms ;
    while (rooms --){
        int people , canLive;
        cin >> people >> canLive;

        if(people+2 <= canLive  ){
            okToLive++;
        }
    }
    cout << okToLive;
    return 0;
}   