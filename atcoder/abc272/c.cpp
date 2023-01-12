#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> odd, even;

	for( int i = 0;i < n;i ++ ) {
		int x;
		cin >> x;
		if( x & 1 )
			odd.push_back( x );
		else 
			even.push_back( x );
	}

	sort( odd.rbegin(), odd.rend() );
	sort( even.rbegin(), even.rend() );

	int ans = -1;
	if( odd.size() > 1 ) ans = odd[0] + odd[1];
	if( even.size() > 1 ) ans = max( ans, even[0] + even[1] );

	cout << ans << endl;

	return 0;
}
