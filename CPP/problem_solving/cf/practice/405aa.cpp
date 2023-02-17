#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n ; 
    cin >> n ;
    list<int>l;
    while (n--){
        int ll;
        cin >> ll;
        l.push_back(ll);
    }

    l.sort();

    for (int i : l){
        cout << i << " ";
    }
    return 0;
}