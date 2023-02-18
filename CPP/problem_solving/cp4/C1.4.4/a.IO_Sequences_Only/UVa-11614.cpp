/* 

This problem is asking us to find the number of rows that can be formed with a given number of Etruscan warriors. We can notice that the number of warriors in each row forms a sequence of consecutive integers starting from 1, and that the total number of warriors is the sum of the first n integers.

We can use this observation to solve the problem by finding the largest row number k such that the sum of the first k integers is less than or equal to n. We can compute this sum using the formula for the sum of an arithmetic series:

S = (k/2) * (2 + k - 1) = k * (k + 1) / 2

We can solve this equation for k using the quadratic formula:

k = (-1 + sqrt(1 + 8n)) / 2

We take the floor of this expression to get the largest integer k such that S(k) <= n. This gives us the number of full rows that can be formed with n warriors.

If there are any remaining warriors, we can check if we can add them to a new, partially filled row. We can do this by checking if the number of warriors in the last row is less than k. If it is, we can add the remaining warriors to that row. Otherwise, we need to add a new row with one warrior and add the remaining warriors to that row.

 */


#include <bits/stdc++.h>
#define endl "\n"
#define test int t; cin>>t; while(t--)
#define fastio ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define ll long long int
using namespace std;

void solve()
{
    test
    {
        ll num ;
        cin >> num ;
        cout << (ll) floor(-1+sqrt(1+8*num))/2  << endl;
    }
}


int main(void){

    fastio;
    solve();

}