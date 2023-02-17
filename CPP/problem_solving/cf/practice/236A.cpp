#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
        string userName;
        int num ;
        cin >> userName;
        int hash[128]= {0};
            for (int i = 0 ; i < userName.size();i++){
                hash[userName[i]] = 1;
            }

            for (int i : hash){
                num += i;
            }
            string res = num % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!";
            cout << res;
            cout << num;
    return 0;
}