#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    string s ;
    cin >>s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.'){
            cout << 0;
        }
        else if (s[i] == '-' && s[i+1] == '.'){
            cout<< 1;
            i += 1;
        }
        else if(s[i] == '-' &&  s[i+1] == '-'){
            cout << 2;
            i += 1;
        }
        
    }

}