#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll l, r, sum;
    cin >> l >> r;

    if (l > r)
        swap(l, r);

    --l;

    ll ans = (r * (r + 1) / 2) - (l * (l + 1)) / 2;
    /*
    ll n = r - l + 1;
    sum = (n * (l + r)) / 2;
    */
    cout << sum << endl;
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

    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
