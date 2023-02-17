#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector <char> vowel = {'a','e','i','o','y','u'};
    vector <char> word;
    
    string s;
    cin >> s ;
    for (char i : s){
        word.push_back(tolower (i));
    }
    for (int i = word.size() - 1; i >= 0; i--)
    {
        for (int j = vowel.size() - 1; j >= 0; j--){
            if(vowel[j]==word[i]){
                word.erase(word.begin()+i);
            }
        }
    }

    vector<char>fnWord;

    for(char i : word){
        fnWord.push_back('.');
        fnWord.push_back(i);
    }

    for (char i : fnWord){
       cout << i;
    }

    return 0;
}