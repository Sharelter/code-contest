#include<bits/stdc++.h>

using namespace std;

void sol()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	map<string, int> ss;
	bool flag = false;
	for( int i = 0;i < n - 1;i ++ )
	{
		string sub = s.substr(i, 2);
		if( ss.count(sub) ) {
			if( ss[sub] < i - 1 ) {
				flag = true;
				break;

			}
		}
		else {
			ss.insert( {sub, i} );
		}
	}
	if( flag ) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main()
{
	int tt;
	cin >> tt;

	while( tt-- ) sol();

	return 0;
}
