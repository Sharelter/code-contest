#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, q;
	cin >> n >> q;
	set<pair<ll, ll>> st;

	while( q-- ) 
	{
		int t;
		cin >> t;
		if( t == 1 )
		{
			int a, b;
			cin >> a >> b;
			st.insert( {a, b} );
		}
		else if( t == 2 ) {
			int a, b;
			cin >> a >> b;
			if( st.find( {a, b} ) != st.end() )st.erase( {a, b} );
		}
		else if( t == 3 ) {
			int a, b;
			cin >> a >> b;
			if( st.find( {a, b} ) != st.end() and st.find( {b, a} ) != st.end() ) cout << "Yes" << endl;
			else  cout << "No" << endl;
		}
	}

	return 0;
}
