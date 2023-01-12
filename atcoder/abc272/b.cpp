#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<bool>> chk( n, vector<bool>(n, false) );
	for( int i = 0;i < m;i ++ ) 
	{
		int k;
		cin >> k;
		vector<int> a(k);
		for( auto &x : a ) cin >> x, --x;

		for( int j = 0;j < a.size() - 1;j ++ )
			for( int k = j + 1;k < a.size();k ++ )
				chk[a[j]][a[k]] = true;
	}

	bool ok = true;
	for( int i = 0;i < n;i ++ )
		for( int j = i + 1;j < n;j ++ ) 
			ok &= chk[i][j];

	cout << ( ok ? "Yes" : "No" ) << endl;

	return 0;
}
