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

    // delete at position
    int dl ;
    cin >> dl;
    for (int i = dl-1 ; i < number-1 ; i++ ){
        arr[i] = arr[i+1];
    }
    
    cout << "\nAfter deletion : ";
    for(int i = 0 ; i < number ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}   