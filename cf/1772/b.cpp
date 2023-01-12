#include<bits/stdc++.h>

using namespace std;

bool check( vector<int> a )
{
	if( a[0] > a[1] and a[2] > a[3] and a[0] > a[2] and a[1] > a[3] ) return true;
	else return false;
}

vector<int> rotate( vector<int> a )
{
	vector<int> ans;
	ans.push_back( a[2] );
	ans.push_back( a[0] );
	ans.push_back( a[3] );
	ans.push_back( a[1] );
	return ans;
}

void sol()
{
	vector<int> a(4);

	for( int i = 0;i < 4;i ++ ) cin >> a[i];

	if( check(a) ) cout << "Yes" << endl;
	else {
		bool flag = false;
		for( int i = 0;i < 3;i ++ ) 
		{
			a = rotate( a );
			if( check( a ) ) flag = true;
		}
		cout << ( flag ? "Yes" : "No" ) << endl;
	}
}

int main()
{
	int tt;
	cin >> tt;

	while( tt-- ) sol();
}
