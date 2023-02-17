#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    long long number;
    cin >> number;
    cout << number << " ";
    
    while(number > 1){
        if (number % 2 == 0)
        {
            number/=2;
            cout << number << " " ;
        }
        else {
            number*=3;
            number+=1;
            cout << number << " ";
        }
    }
    
    
    
}