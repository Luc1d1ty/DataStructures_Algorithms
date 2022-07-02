#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;   // fast input output

    int num;
    cin >> num ;

    for(int i = 2 ; i < num ; i++ ){ // i = 2 because we are checking for prime numbers from 2 to num-1
        if(num % i == 0 ){ // if num is divisible by i then it is not prime
            cout << "False"; 
            break; 
        }
        else { // if num is not divisible by i then it is prime
            cout << "True"; 
        }
    }
    
}