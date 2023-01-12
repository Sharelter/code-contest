#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);

	for( int i = 0;i < n;i ++ ) cin >> a[i];

	long long ans = 1;
	for( int i = 0;i < n;i ++ ) ans *= a[i];
	ans += n - 1;
	ans *= 2022;
	cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while( t-- ) solve();

	return 0;
}
