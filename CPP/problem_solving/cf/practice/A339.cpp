#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin >>s;
    vector <int> nums;

    for(auto i : s){
        if(i=='+'){

        }
        else {
            nums.push_back(i-'0');
        }
    }
    sort(nums.begin(),nums.end());
    
    for(auto i = 0;i < nums.size();i++){
        cout<<nums[i];
        if(i != nums.size()-1){
        cout << "+";
        }
    }

    
    return 0;
}                   