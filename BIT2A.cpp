#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int hash[arr[n-1] + 1] = {0};
		for (int i = 0; i < n; ++i)
		{
			hash[arr[i]]++;
		}
		for (int i = 0; i < n; ++i)
		{
			if(n - hash[arr[i]] - i > 0) {cout << n - hash[arr[i]] - i<< " "; hash[arr[i]]--;}
			else
				cout << 0 << " ";
		}
		cout << "\n";
	}
	return 0;
}