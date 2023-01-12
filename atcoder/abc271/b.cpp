#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<vector<int>> arr(n);
	for( int i = 0;i < n;i ++ )
	{
		int l;
		cin >> l;
		while( l-- ){
			int x;
			scanf("%d", &x);
			arr[i].push_back( x );
		}
	}

	while( q-- ) {
		int s, t;
		cin >> s >> t;
		cout << arr[s - 1][t - 1] << endl;
	}
}
