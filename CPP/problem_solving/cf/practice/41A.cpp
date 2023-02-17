#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string str1,str2,temp;
    cin >> str1 >> str2;
    reverse(str1.begin(),str1.end());
    cout << (str1 == str2 ? "YES" : "NO") << endl;
    return 0;
}