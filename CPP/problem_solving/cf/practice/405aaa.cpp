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
    multiset<int>ms;
    while (n--){
        int data ;
        cin >> data ;
        ms.insert(data);
    }

    for(int i : ms)
    {
        cout << i << " " ;
    }
    return 0;
}   