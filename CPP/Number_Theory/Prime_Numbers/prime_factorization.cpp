#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int main(void)
{

    //fastio;
    cout << "Enter a number to check its prime factorization (must be greater than 1) : " ;
    int num;
    cin >> num;

    cout << "Prime factorization of "<<num<<" is :> " ;
    for (int i = 2; i < num; i++)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num = num / i;
        }
    }

    if (num > 1)
    {
        cout << num << " ";
    }
}


// ignore . not optimized . left just for demonstration . to use , uncomment (also comment out the top main function).

//int mx = 100001;

/*
vector<int> primes()
{

    vector<int> x(mx + 1, 1);
    vector<int> y;
    x[0] = 0;
    x[1] = 0;

    for (int i = 2; i <= sqrt(mx); i++)
    {
        if (x[i] == 1)
        {
            for (int j = i * i; j <= mx; j += i)
            {
                if (x[j] != 0)
                {
                    x[j] = 0;
                }
            }
        }
    }
    for (int i = 0; i <= mx; i++)
    {
        if (x[i] == 1)
        {
            y.push_back(i);
        }
    }

    return y;
}

vector<int> pf(int x)
{

    vector<int> an = primes();
    vector<int> ans;

    for (int i = 2; i <= sqrt(x); i++)
    {
        while (x % i == 0)
        {
            ans.push_back(i);

            x = x / i;
        }
    }
    if (x > 1)
    {
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());

    return ans;
}
 */




/*int main(){
     int number;
    cin >> number;

    primes();

    vector<int> ys = pf(number);
    if (number == 1)
    {
        cout << "1" << endl;
    }
    else
    {

        for (int i = 0; i < ys.size(); i++)
        {
            cout << ys[i] << " ";
        }
    } 
}*/
