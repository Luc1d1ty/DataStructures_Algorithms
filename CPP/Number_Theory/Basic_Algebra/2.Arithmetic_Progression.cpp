/* 

Arithmetic progression is a sequence of numbers such that
 the difference between each consecutive term is constant, 
  commonly denoted by d.

For example:

3, 5, 7, 9, ...

Here, the first term, a = 3 , and the common difference, d = 2 .

In general, AP is  a, a+d , a+2d, ... , a+(n-1)d

where 'n'th term  = a+(n−1)d

 */


#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(void)
{
    int arr[4] = {3,5,7,9};
    cout << "\nEnter the 'n'th term you want to find ( except 0 ) : ";
    int n;
    cin >> n;

    int a = arr[0]; // the first term 
    int d = arr[1]-arr[0]; // difference

    int result = a+(n-1)*d;

    cout << " 'n'th term of this Arithmetic progression is : " << result << endl;
}       