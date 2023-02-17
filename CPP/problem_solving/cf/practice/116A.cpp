#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    int toRepeat, finally = 0;
    cin >> toRepeat;
    for (int i = 1; i <= toRepeat; i++)
    {
        int enters, exits, fnRes, result;
        cin >> exits >> enters;
        if (i == 1)
        {
            result = (enters + exits);
            finally = result;
            // cout << result ;
        }
        else
        {
            fnRes = (result - exits) + enters;
            result = fnRes;
            // cout << fnRes << endl;
            // cout << "  "<<finally << endl;
            if (finally > fnRes)
            {
                finally = finally;
            }
            else
            {
                finally = fnRes;
            }
            // cout << "finally = " << finally << endl;
            // finally = fnRes;
        }
    }
    cout << finally;
}
