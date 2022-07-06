/* 
problem : AMR11E - Distinct Primes :: https://www.spoj.com/problems/AMR11E/
Time : 0.01
By : Luc1d (MhR)
link : https://www.spoj.com/files/src/29769490/

 */



#include <bits/stdc++.h>

#define endl "\n"

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

#define ll long long int
#define V vector
#define D deque
#define ST set

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

const ll maxn = 1e5;
using namespace std;


V<ll> countUniquePrime()
{
    V<ll> maxPrime;
    
    // loop will run up to 2664 to get the 1000th lucky number. if to generate more and don't know the upper limit , use variable maxn
    
    for (ll i = 30; i <= 2664; i++) 
    {
        ll tmp = i;
        ST<ll> uPrimes; // using set to easily get the unique primes .

        for (ll j = 2; j <= sqrt(tmp); j++) // prime factorization
        {
            while (tmp % j == 0)
            {
                uPrimes.insert(j);
                tmp = tmp / j;
            }
        }
        if (tmp > 1)
        {
            uPrimes.insert(tmp);
        }


        if (uPrimes.size() >= 3)// checking if the set contains 3 or more primes
        {
            maxPrime.push_back(i); //pushing the number to the vector . ex : 30 , 42 , 60 ...
        }

    }
    return maxPrime;
}

void solve()
{
    V<ll> primes = countUniquePrime(); // pre calculation 
    test
    {
        int num;
        cin >> num;
        cout << primes[num-1]<< endl; // we already know the value . just print the the result using index :D
    }
}

int main(void)
{

    fastio;
    solve();
}
