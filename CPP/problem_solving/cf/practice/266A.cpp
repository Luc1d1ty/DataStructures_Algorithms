#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n , c;
    string s ;
    cin >> n >> s;
    for (int i = 0 ; i < s.length()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }    
    }
    cout << c;
    return 0;
}       