#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	ll fact=1,n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		fact*=i;
	}
	cout<<""<<fact<<endl;

	/*
	while (t--)
    {
        int n;
        cin >> n;

        ll factorial = 1;
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << factorial << endl;
	*/
}
 
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	ll test;
	cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}
