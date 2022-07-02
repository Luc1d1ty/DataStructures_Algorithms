#include <bits/stdc++.h>

#define endl "\n"

// using namespace std;

int main()
{
    // will be working with indexes .

    std ::cout << "For generating prime numbers ranging from 1 to : ";
    int n;
    std ::cin >> n;
    int v[n + 1];
    for (int i = 0; i <= n; i++)
    {
        v[i] = 1;
    }

    // vector<int> v((n+1), 1); // to use vector instead of array

    v[0] = 0; // 0 is not prime number
    v[1] = 0; // 1 is not prime number

    for (int i = 2; i <= n / 2; i++) // sieve of eratosthenes
    {
        if (v[i] == 1) // means v[i] is prime number and we are checking multiples if i
        {
            for (int j = i * 2; j <= n; j += i) // j = i*2 because we are checking multiples of i from i*2 to n
            {
                if (v[j] != 0) // since multiples of i are not prime numbers...
                {
                    v[j] = 0; //  v[j] should is not be a prime number . set v[j] to 0
                }
            }
        }
    }

    std ::cout << "\nPrime numbers from 1 to " << n << " are : ";

    for (int i = 0; i <= n; i++)
    {
        if (v[i] == 1) // prime numbers indexes are set to 1 . others are set to 0
        {
            std ::cout << i << " ";
        }
    }
    std ::cout << endl;
}
