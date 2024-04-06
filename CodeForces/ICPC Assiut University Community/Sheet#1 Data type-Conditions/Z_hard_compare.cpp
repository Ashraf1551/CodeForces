#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double p_ab= b*log(a);
    double p_cd= d*log(c);
    if(p_ab>p_cd)
        cout<<"YES";
    else
        cout<<"NO";
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