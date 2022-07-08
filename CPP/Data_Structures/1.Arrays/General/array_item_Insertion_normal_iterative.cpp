#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    int number ;
    cin >> number;

    int arr[100];
    for (int i = 0 ; i < number ; i++){
        cin >> arr[i];
    }

    cout << "arr after insertion " ;
        for (int i = 0 ; i < number ; i++){
            cout << arr[i] << " " ;
        }
    // insert at any position 
    cout << endl;
    int pos , data ;
    cin >> pos >> data ;

    for(int i = number-1 ; i >= pos-1 ; i--){
        arr[i+1]= arr[i];
    }
    number++;
    arr[pos-1] = data;
    cout << "\nAfter insetion : ";
    for(int i = 0 ; i < number ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}   