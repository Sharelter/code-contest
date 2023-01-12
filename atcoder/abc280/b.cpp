#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin >> n;
	int seq[n];
	for(int i = 0;i < n;i ++) cin >> seq[i];
	int ans[n];
	ans[0] = seq[0];
	for(int i = 1;i < n;i ++ ) {
		ans[i] = seq[i] - seq[i - 1];
	}

	for(int i = 0;i < n;i ++) cout << ans[i] << ' ';

	return 0;
}
