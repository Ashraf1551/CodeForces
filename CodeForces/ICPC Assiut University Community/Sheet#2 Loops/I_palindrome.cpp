#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int num, temp, sum = 0, r;
    cin >> num;

    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    cout << sum<<endl;
    if (num == sum)
        cout << "YES";
    else
        cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
