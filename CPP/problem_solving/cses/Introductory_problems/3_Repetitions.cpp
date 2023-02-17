#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s ;
    cin >> s;
    int cnt = 0 ;
    vector<int>s1;

    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] == 'A') {
            cnt++;
            if(s[i+1] != 'A') {
                s1.push_back(cnt);
                cnt = 0;
            }
        }
        else if (s[i] == 'C') {
            cnt++;
            if(s[i+1] != 'C') {
                s1.push_back(cnt);
                cnt = 0;
            }
        }
        else if (s[i] == 'G') {
            cnt++;
            if(s[i+1] != 'G') {
                s1.push_back(cnt);
                cnt = 0;
            }
        }   
        else if (s[i] == 'T') {
            cnt++;
            if(s[i+1] != 'T') {
                s1.push_back(cnt);
                cnt = 0;
            }
        }
    }
    
    cout << *max_element(s1.begin(),s1.end())<< endl;
    return 0;
}