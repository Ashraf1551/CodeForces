#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0)
        cout << "Both" << endl;

    else if (a % k == 0 && b % k != 0)
        cout << "Memo";
    else if (b % k == 0 && a % k != 0)
        cout << "Momo";
    else
        cout << "No One";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
