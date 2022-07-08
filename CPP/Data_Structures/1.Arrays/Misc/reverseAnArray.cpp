#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main()
{
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
    cout << " elements before reverse :" << endl;
    for (int i : arr){
        cout << i << " ";
    }

    for(int i = 0 , j = sizeOfArray-1 ; i < sizeOfArray/2 ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    } 
    
    //reverseArr(arr, 0,sizeOfArray-1);
    
    cout << " elements after reverse : " << endl;
    for (int i : arr){
        cout << i << " ";
    }
    cout  << endl;

    return 0;
}