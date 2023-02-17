#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int counter ;
    cin >>  counter;
    while (counter--){
        int x,y,x1 = 0, x2 = 0,y1 =0,y2 =0;
        cin >> x >> y;
        x1 = x ; 
        y1  = y;

        double equation = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        
            if(equation == 0){
                cout << 0 << endl;
            }
             else if (floor(equation) == ceil(equation)){
                cout << 1 << endl;
            } 
            else {
                cout << 2 << endl;
            } 

    }
    return 0;
}   