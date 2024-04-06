#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a, b;
    cin >> a >> b;

    cout<<""<<a<<" + "<<""<<b<<" = "<<a+b<<endl;

    cout<<""<<a<<" * "<<""<<b<<" = "<<1LL*a*b<<endl;

    //cout<<""<<a<<" * "<<""<<b<<" = "<<(long long int)a*b<<endl;

    cout<<""<<a<<" - "<<""<<b<<" = "<<a-b;
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
