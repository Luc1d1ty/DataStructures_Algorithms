#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(void)
{
    int num = -1;
    do
    {
        bool flag = true;
        cout << "\n Enter a number . to end the program enter / press 0 : ";
        cin >> num;
        if (num <= 1)
        {
            flag = false;
        }
        else
        {
            for (int i = 2; i < num; i++)
            { // i = 2 because we are checking for prime numbers from 2 to num-1
                if (num % i == 0)
                { // if num is divisible by i then it is not prime
                    flag = false;
                    break;
                }
            }
        }

        flag == true ? cout << "The number " << num << " is prime " << endl : cout << "Unfortunately , The number " << num << " is not prime " << endl;

    } while (num != 0);
}