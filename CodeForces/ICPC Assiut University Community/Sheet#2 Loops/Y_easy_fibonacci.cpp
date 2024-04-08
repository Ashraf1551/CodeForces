#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int f_num = 0, s_num = 1, count = 0, n, fibo;
    cin >> n;
    while (count < n)
    {

        if (count <= 1)
            fibo = count;

        else
        {
            fibo = f_num + s_num;
            f_num = s_num;
            s_num = fibo;
        }
        cout <<fibo<<" ";
        count++;
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
