#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main(void)
{
    int isCap = 0, isSmall = 0;
    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            isCap++;
        }
        else
        {
            isSmall++;
        }
    }
    if (isCap == isSmall)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    else if (isCap > isSmall)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else if (isCap < isSmall)
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }

    cout << word;
}