#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    /*
    int pw;
    while(1)
    {
    	cin>>pw;
    	if(pw==1999)
    	{
			cout<<"Correct"<<endl;
    		break;
    	}
    	else
    	cout<<"Wrong"<<endl;
    }
    */
    
    int n, pw;
    cin>>n;
    for(int i=0; i<n; i++)//for(;;)
    {
        cin>>pw;

        if(pw!=1999)
        {
            cout<<"Wrong!"<<endl;
        }
        else
        {
            if(pw==1999)
            cout<<"Correct"<<endl;
            break;
        }
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
