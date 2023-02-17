/*

In the pet store on sale there are:

a packs of dog food;
b packs of cat food;
c packs of universal food (such food is suitable for both dogs and cats).
Polycarp has x dogs and y cats. Is it possible that he will be able to buy food for all his animals in the store? Each of his dogs and each of his cats should receive one pack of suitable food for it.

Input
The first line of input contains an integer t (1≤t≤104) — the number of test cases in the input.

Then t lines are given, each containing a description of one test case. Each description consists of five integers a,b,c,x and y (0≤a,b,c,x,y≤108).

Output
For each test case in a separate line, output:

YES, if suitable food can be bought for each of x dogs and for each of y cats;
NO else.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

Example
inputCopy
7
1 1 4 2 3
0 0 0 0 0
5 5 0 4 6
1 1 1 1 1
50000000 50000000 100000000 100000000 100000000
0 0 0 100000000 100000000
1 3 2 2 5
outputCopy
YES
YES
NO
YES
YES
NO
NO */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopr(i, a, b) for (int i = a; i >= b; i--)
#define loops(i, a, b, step) for (int i = a; i < b; i += step)
#define looprs(i, a, b, step) for (int i = a; i >= b; i -= step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
#define all(a) a.begin(), a.end()
#define ld long double
#define endl "\n"
using namespace std;
// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

void solve()
{
    test
    {
        ll a, b, c, x, y, aux1, aux2, resA, resB;
        cin >> a >> b >> c >> x >> y;
        if (a >= x && b >= y)
        {
            cout << "YES" << endl;
        }
        else if (a < x || b < y)
        {
            //1 2 4 3 2
            //a b c x y
            if (c != 0)
            {
                aux1 = x - a;
                aux2 = y - b;
                if(a < x){
                    resA = aux1 + a;
                    c = c - aux1;
                }
                if(b<y){
                    resB = aux2 + b;
                    c = c - aux2;
                }
                if (c >= 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

int main(void)
{

    fastio;
    solve();
}
