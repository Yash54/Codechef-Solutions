#include <bits/stdc++.h>

#define ll long long int
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR1(i, m, n) for(int i=m; i<n; i++)
#define FOR2(i, n, m) for(int i=n-1; i>=m; i--)

using namespace std;

int main(int argc, char const *argv[])
{
	FASTIO;
	int t;
	cin >> t;
	while(t--)
  	{
		long long int n,a,b,c;
		cin>>n>>a>>b>>c;
		long long int ans=-1;
		long long int f;
		cin>>f;
		n--;	
		ans=c+abs(b-f)+abs(f-a);
		while(n--)
		{
			cin>>f;
			ans=min(ans,c+abs(b-f)+abs(f-a));
		}  
		cout<<ans<<'\n'; 	
  	}
	return 0;
}