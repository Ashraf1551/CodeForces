#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;

    for (int num = 2; num <= n; num++) {
        int count = 0; // Reset count for each num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                count++;
                break; // Move break inside if statement
            }
        }
        if (count == 0)
            cout << num << " ";
    }
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
