/* 
problem : TRIALDIV - Trial Division :: https://www.spoj.com/problems/TRIALDIV/
Time : 0.01
By : Luc1d (MhR)

 */


#include <bits/stdc++.h>

#define endl "\n"
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

#define ll long long int

#define V vector

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

using namespace std;

void solve()
{
    test
    {
        int number;
        cin >> number;
        if(number == 1){
            cout << 1 ;
        }


        V<int>v ;
        for(int i = 2 ; i <= sqrt(number) ; i++){
            while (number % i == 0){
                v.push_back(i);
                number/=i;
            }
        }
        if(number > 1 ){
            v.push_back(number);
        }

        sort(v.begin(),v.end());

        for(int i = 0 ; i <= v.size()-1;i++ ){
            
            cout << v[i];
            if(i != v.size()-1){
                cout << " ";
            }
        }
        cout << endl;
        
    }
}

int main(void)
{

    //fastio; // can be used . wont make any difference on runtime 
    solve();
}