#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    //fastio;
    // store data in an array .
    int sizeOfArray;
    cout << "Enter the number of element you want to store :  " << endl;
    cin >> sizeOfArray;

    int arr[sizeOfArray];
    cout << "Enter values  :  ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        // both methods works fine
        //int data ;
        //cin >> data;
        cin >> arr[i];
        //arr[i] = data;
    }
    cout << " elements in the array are :" << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl <<" elements in the array are : (using pointer )" << endl;
    for(int *i = arr ; i!= arr+sizeOfArray ; i++ ){
        cout << *i << " ";
    }
    
    cout  << endl;

    return 0;
}