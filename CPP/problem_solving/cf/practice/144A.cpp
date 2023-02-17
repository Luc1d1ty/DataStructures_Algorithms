#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int nums ,count = 0;
    cin >> nums ;
    vector <int> a;
    while (nums--){
        int aa ;
        cin >> aa;
        a.push_back(aa);
    }

     for(int i = 1 ; i < a.size() ; i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] < key /* imp! > key is for ascending */){
            a[j+1] = a[j];
            j--;
            count ++;
            for (int i  : a){
            cout << i << " ";
        }
        cout << endl;
        }
        a[j+1]= key;

    }

   /*  for(int i = 0 ; i < a.size() ; i++ ){
        for (int j = 0 ; j < a.size() ; j++ ){

        }
        if(a[i] < a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            count++;
        }
        for (int i  : a){
            cout << i << " ";
        }
        cout << endl;
    } */
    cout << count;
    return 0;
}   