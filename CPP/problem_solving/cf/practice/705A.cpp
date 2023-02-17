#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    fastio;
    int toRepeat;
    cin >> toRepeat;

    string s1[] = {"hate", "love"};
    string s2 = "love";

    for (int i = 0; i < toRepeat; i++)
    {
        if (toRepeat == 1)
        {
            cout << "I " << s1[i] << " it";
            break;
        }

        else
        {
            cout << "I " << s1[i%2];
            if (i == toRepeat - 1)
            {
                cout << " it";
            }
            else
            {
                cout << " that ";
            }
        }
    }
}