#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n; 
    cin >> n ;
    int arr[n+1]; 
    for(int i = 0 ; i <= n ; i++){ 
        arr[i] = 0;  // initialize all elements of arr to 0
    }
    arr[2]=1; // 2 is prime number

    for(int i = 2 ; i <= n ; i++){ // i = 2 because we are checking for prime numbers from 2 to num
        for(int j = 2 ; j < i ; j++){ // j = 2 because we are checking for prime numbers from 2 to i-1
            if(i%j == 0){ // if i is divisible by j then it is not prime
                arr[i] = 0 ; // set arr[i] to 0
                break;
            }
            else{
                arr[i] = 1; // if i is not divisible by j then it is prime
            }
        }
    }

    for(int i = 0 ; i <= n ; i++){ // i = 0 because we are printing prime numbers from 0 to n
        if(arr[i] == 1 ){
            cout << i << " ";
        }
    }
    return 0;
}   