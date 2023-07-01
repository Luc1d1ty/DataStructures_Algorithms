#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

bool checkPrime(int num)
{
    if (num <= 1)
    {
        cout << "The number "<< num << " is not prime because it is less than or equal to 1 . Program will end now ." << endl;
        exit(0);
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        { // i = 2 because we are checking for prime numbers from 2 to square root of num 
            if (num % i == 0)
            { // if num is divisible by i then it is not prime
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    int num = -1;
    do
    {
        cout << "\n Enter a number to check prime . to end the program enter a number less than or equal 1 : ";
        cin >> num;
        
        checkPrime(num) ? cout << "\nThe number " << num << " is prime " << endl : cout << "\nUnfortunately , The number " << num << " is not prime " << endl;

    } while (num > 1);
}