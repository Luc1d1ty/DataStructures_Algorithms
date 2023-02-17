#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int numOfPerson , maxHeight , sum=0;
    cin >> numOfPerson >> maxHeight ;

    for(int i = 1 ; i <= numOfPerson ; i++){
        int heights;
        cin >> heights ;
        if(heights > maxHeight){
            sum+=2;
        }
        else {
            sum+=1;
        }
    }
    cout << sum;
    return 0;
}