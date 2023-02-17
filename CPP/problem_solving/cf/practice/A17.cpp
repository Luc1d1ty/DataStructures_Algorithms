#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define endl "\n"
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
    int uptoRange, atLeast;
    cin >> uptoRange >> atLeast;

    V<int> v(uptoRange + 1, 1);

    v[0] = 0;
    v[1] = 0;

    for (int i = 2; i <= sqrt(uptoRange); i++)
    {
        if (v[i] == 1)
        {
            for (int j = i * 2; j <= uptoRange; j += i)
            {
                if (v[j] != 0)
                {
                    v[j] = 0;
                }
            }
        }
    }

    V<int> oP;

    for (int i = 0; i <= uptoRange; i++)
    {
        if (v[i] == 1)
        {
            oP.push_back(i);
        }
    }
    int cntr = 0 ;

    for (int i = 0; i < oP.size() - 1; i++)
    {
        for (int j = 2; j < oP.size() ; j++)
        {

            if (oP[i] + oP[i + 1] + 1 == oP[j])
            {
                cntr++;
            }

        }
    }

    (cntr >= atLeast) ? cout << "Yes" << endl : cout << "No" << endl;
}

int main(void)
{

    fastio;
    solve();
}