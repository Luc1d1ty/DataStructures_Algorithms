#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void removeDuplicates(std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::vector<int> y;
    int x = arr[0];
    int i = 0;
    while (i < arr.size())
    {
        if (x != arr[i])
        {
            y.push_back(x);
            x = arr[i];
        }
        i++;
        if (i == arr.size())
            y.push_back(arr[i - 1]);
    }
    arr = y;
}


int main()
{
    fastio;
    int testCases;

    cin >> testCases;

    while (testCases--)
    {
        int arrSize;
        cin >> arrSize;

        vector<int> items;

        for (int i = 0; i < arrSize; i++)
        {
            int item;
            cin >> item;
            items.push_back(item);
        }

          sort(items.begin(), items.end());

          vector<int> negative;
          vector<int> positive;

           for (int i = 0; i < arrSize; i++)
        {
            if(items[i]<0){
                negative.push_back(i);
            }
            else{
                positive.push_back(i);

            }
        }

            int counter = 0;
        if(negative.empty()){
        int thatItem = -200;

        for (int i = 0; i < arrSize; i++)
        {

            if (items[i] == thatItem)
            {
                continue;
            }
            if (items[i] == items[i + 1])
            {
                counter += 1;
                if (items[i] < 0)
                {
                    items[i] = abs(items[i]);
                }
                else
                {
                    items[i] = items[i] - items[i] - items[i];
                }
                thatItem = items[i + 1];
            }

            if (items[i] != items[i + 1])
            {
                counter += 1;
            }
        }
        
        }
        else{
            removeDuplicates(items);
        int count = distance(items.begin(), unique(items.begin(), items.begin() + arrSize));
        

        int thatItem = -200;
        if(count != arrSize){
        counter = 1;

        }
        else
        {
            counter = 0;
        }
        
        
        for (int i = 0; i < count; i++)
        {
            
            if(items[i]>0 and items[i+1]<0){
                break;
            }
            counter++;

            
        }
        
        
    }
        cout <<counter << endl;

    }

    return 0;
}