#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll x;
	cin >> x;
	vector<ll> ans;

	ll xx = x;
	while( true ) {
		ans.push_back( xx );
		if( xx == 0 ) break;
		xx = ( xx - 1 ) & x;
	}

	sort( ans.begin(), ans.end() );

	for( auto x : ans ) cout << x << endl;
}
