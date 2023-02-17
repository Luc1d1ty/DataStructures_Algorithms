#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

int main(void)
{
    int numOfPlayers, position, numOfAcceptedPerticipentes = 0;
    cin >> numOfPlayers >> position;
    vector<int> players;
    for (int i = 0; i < numOfPlayers; i++)
    {
        int playerCount;
        cin >> playerCount;
        players.push_back(playerCount);
    }

    if (players[position - 1] >= 0)
    {
        if (players[position - 1] == 0)
        {
            for (int i = position - 1; i > 0; i--)
            {
                if (players[i] == 0 && players[i - 1] == 0)
                {
                    numOfAcceptedPerticipentes = 0;
                }
                else
                {
                    numOfAcceptedPerticipentes++;
                }
            }
        }
        else
        {
            numOfAcceptedPerticipentes = position;
            for (int i = position - 1; i < numOfPlayers-1; i++){
                if (players[i] == players[i + 1]){
                    numOfAcceptedPerticipentes++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout << numOfAcceptedPerticipentes;
}