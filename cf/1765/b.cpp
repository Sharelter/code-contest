#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin >> tt;

	while( tt -- ) {
		int n;
		cin >> n;

		string s;
		cin >> s;
		bool flag = true;

		if( n % 3 == 2 ) cout << "No" << endl;
		else {
			for( int i = 0;i < n / 3;i ++ ) {
				if( s[i * 3 + 1] != s[i * 3 + 2] ) flag = false;
			}

			if( flag ) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
}
