#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;

	cin >> n >> k;

	vector<int> arr(n + 10);

	for(int i = 0;i < n;i ++) cin >> arr[i];

	if(k < n) {
		for( int i = k;i < n;i ++ ) cout << arr[i] << ' ';
		for( int i = 0;i < k;i ++ ) cout << '0' << ' ';
	}
	else {
		for( int i = 0;i < n;i ++ ) cout << '0' << ' ';
	}

	return 0;
}
