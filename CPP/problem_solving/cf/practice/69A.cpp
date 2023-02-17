
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    int x, y, z;
    int sum = 0;
    int sumX = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        sum += x + y + z;
        sumX+=x;

        
    }
    if (sum == 0 && sumX == 0){

        cout << "YES" << endl;
    }
    else{

        cout << "NO" << endl;
    }

    return 0;
}