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
    cout << "Enter the value you want to delete : " << endl;
    int toDelete, ind = -1;
    cin >> toDelete;

    int arr[sizeOfArray];
    cout << "Enter values  :  ";
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
        if (arr[i] == toDelete)
        {
            ind = i;
        }
    }

    cout << endl
         << " elements in the array are : (using pointer )" << endl;
    for (int *i = arr; i != arr + sizeOfArray; i++)
    {
        cout << *i << " ";
        // delete arr;
    }

    if (ind == -1)
    {
        return 0;
    }
    else
    {
        for (int i = ind; i < sizeOfArray - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }

    // delete (arr+5);
    //cout << "Memory " << arr + 4 << endl;
    //cout << "Memory " << arr + 5 << endl;
    // delete (arr+sizeOfArray);
    
    cout << endl
         << " elements in the array are : after delete" << endl;
    for (int *i = arr; i != arr + sizeOfArray; i++)
    {
        if (i == (arr + sizeOfArray) - 1)
        {
            delete i;
        }
        cout << *i << " " << i << endl;
    }
    cout << endl;

    return 0;
}