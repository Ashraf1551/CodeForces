#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	float x;
	cin>>x;

	int y=int(x);

	if(x==y)
	cout<<"int "<<y<<endl;
	
	else if(x!=y)

		cout<<"float "<< y<<" "<<x-y<<endl;

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
