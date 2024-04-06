#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	//[0,25], (25,50], (50,75], (75,100]
	float x;
	cin>>x;

	if(x>=0 && x<=25)
		cout<<"Interval [0,25]"<<endl;
	else if(x>25 && x<=50)
		cout<<"Interval (25,50]"<<endl;
	else if(x>50 && x<=75)
		cout<<"Interval (50,75]"<<endl;
	else if(x>75 && x<=100)
		cout<<"Interval (75,100]"<<endl;
	else
		cout<<"Out of Intervals"<<endl;
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
