#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    int costOfFirst, currentMoney, totalAmount, totalValue = 0;
    cin >> costOfFirst >> currentMoney >> totalAmount;
    for (int i = 1; i <= totalAmount; i++)
    {
        totalValue = totalValue + (costOfFirst * i);
    }
    if (currentMoney > totalValue)
    {
        cout << 0;
    }
    else
    {
        cout << totalValue - currentMoney;
    }
}