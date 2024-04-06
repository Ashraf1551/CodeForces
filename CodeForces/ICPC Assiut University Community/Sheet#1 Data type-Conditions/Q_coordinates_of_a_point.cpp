#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	float x, y;
	cin>>x>>y;

	if(x>0 && y>0)
		cout<<"Q1"<<endl;

	else if(x<0 && y>0)
		cout<<"Q2"<<endl;
	else if(x<0 && y<0)
		cout<<"Q3"<<endl;
	else if(x>0 && y<0)
		cout<<"Q4"<<endl;
	else if(x<0 || x>0 && y==0)
		cout<<"Eixo X"<<endl;
	else if(y<0 || y>0 && x==0)
		cout<<"Eixo Y"<<endl;
	else
		cout<<"Origem"<<endl;

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
