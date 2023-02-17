#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define test int t; cin>>t; while(t--)
#define endl "\n"

using namespace std;


    int value , negativeCounter = 0 , currentPolice = 0, ignoredCases = 0 ;
void solve(){
    test{
        cin >> value ;
        if(value > 0 ){
            currentPolice++;
        }
        else{
            if(currentPolice >= 1){
                currentPolice--;
            }
            else{
                ignoredCases++;
            }
        }

    }
    cout << ignoredCases << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}       