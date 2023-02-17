#include <bits/stdc++.h>
#define fastio \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);

using namespace std;

int main (){
    int num , times;
    cin >> num >> times;

    for (int i = 1 ; i <= times ; i++){
        if(num%10 == 0){
            num/=10;
        }
        else {
            num-=1;
        }
    }
    cout << num;
}