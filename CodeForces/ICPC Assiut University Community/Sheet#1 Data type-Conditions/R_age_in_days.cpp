#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int age_days;
	cin>>age_days;

	cout<<""<<age_days/365<<" years"<<endl;
	cout<<""<<age_days%365/30<<" months"<<endl;
	cout<<""<<age_days%365%30<<" days"<<endl;
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
