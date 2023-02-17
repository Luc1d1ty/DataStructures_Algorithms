#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string st;
    set<char> s;
    getline(cin , st);
    
     for (int i = 0; i < st.length(); i++)
    {

        if ((st[i]>='a' && st[i]<='z'))
        {
            s.insert(st[i]);
        }
        
    }

    for(auto c = s.begin() ; c!= s.end(); c++){
        cout << *c ;
    }
     
    cout << s.size();

    return 0;
}