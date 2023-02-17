#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, location, row, col,fn;
    for (int i = 1; i <= 25; i++)
    {
        cin >> a;
        if (a == 1)
        {
            
            location = i;

            if (location >= 1 && location <= 5)
            {
                row = 1;
                col = i;
            }

            else if (location >= 6 && location <= 10)
            {
                row = 2;
                col = i - 5;
            }

            else if (location >= 11 && location <= 15)
            {
                row = 3;
                col = i - 10;
            }

            else if (location >= 16 && location <= 20)
            {
                row = 4;
                col = i - 15;
            }

            else if (location >= 21 && location <= 25)
            {
                row = 5;
                col = i - 20;
            }
            
        }
    }

    cout << abs(3-row)+abs(3-col);


    return 0;
}