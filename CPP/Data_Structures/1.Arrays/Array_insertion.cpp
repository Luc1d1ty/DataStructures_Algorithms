#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    // fastio;
    //  store data in an array .
    int sizeOfArray;
    cout << "Enter the number of element you want to store :  " << endl;
    cin >> sizeOfArray;
   
    int *arr = new int[1000];
    cout << "Enter values  :  ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "elements in the array are : (using pointer )" << endl;
    for (int *i = arr; i != arr + sizeOfArray; i++)
    {
        cout << *i << " ";
        // delete arr;
    }

    int dataPos,data;
    cout << "\nEnter the position where you want to insert and item : " ;
    cin >> dataPos;
    cout << "\nEnter the data : ";
    cin>>data;

    //arr = new int[7];
    /* for(int i = 0 ; i < 6 ; i++){
        arr[i] = i+1;
    } */
    sizeOfArray++;

     for(auto i = sizeOfArray-2 ; i > dataPos-2 ; i--){
        arr[i+1] = arr[i];
    }
    arr[dataPos-1] = data ; 


    /* if (ind == -1)
    {
        return 0;
    } */
    
       
    

    cout << endl
         << " elements in the array are : after insertion " << endl;
         for(int i = 0 ; i < sizeOfArray ; i++){
             cout << arr[i] << " " ;
         }
    /* for (int *i = arr; i != arr + sizeOfArray; i++)
    {
       
        cout << *i  << endl;
    } */
    cout << endl;

    return 0;
}