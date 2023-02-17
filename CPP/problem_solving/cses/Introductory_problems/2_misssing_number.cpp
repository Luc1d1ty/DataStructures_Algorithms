#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
typedef long long ll;

using namespace std;

int main()
{
    fastio;
    ll number;

    cin >> number;
    vector <ll>tests;

    vector <ll>toCompare;

    ll theNum=0;

    
    
    

    for(ll i = 0 ; i<= number-2; i++){
        ll nums;
        cin>> nums;
        tests.push_back(nums);
    }
    
    sort(tests.begin(),tests.end());

    /* for (int i = 0; i < number-1; ++i){
        cout << tests[i] << " ";} */

    for(ll i = 0 ; i < number; i++){
        toCompare.push_back(i+1);
    }

      


    for(ll i = 0 ; i < number; i++){
        
        if(toCompare[i]!=tests[i]){
            theNum = toCompare[i];
            break;
        }
    }

    cout<<theNum;
    
    return 0;
}