#include<bits/stdc++.h>

using namespace std;

void sol()
{
	int  n;
	cin >> n;

	string s;
	cin >> s;
	string out;

	int ans = s[0] - '0';
	for( int i = 1;i < n;i ++ ) {
		if( s[i] == '1' )  {
			if( ans > 0 ) {
				out += '-';
				ans --;
			}
			else 
			{
				out += '+';
				ans += s[i] - '0';
			}
		}
		else {
			out += '+';
		}
	}

	cout << out << endl;
}

int main()
{
	int tt;
	cin >> tt;
	while( tt-- ) sol();

	return 0;
}
