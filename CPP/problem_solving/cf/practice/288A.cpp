#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    int sz = 1 , count = 0;
    int arr[4];

    while(sz!=5){
        cin >> arr[sz-1];
        sz++;
    }

    sort(arr,arr+4);
    
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
    }

    cout << count;
}