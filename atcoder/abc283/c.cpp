#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	cin >> s;
	int len = s.length();

	int ans = s.length();

	for( int i = 0;i < len;i ++ ) {
		if( s[i] == '0' && s[i + 1] == '0' ) {
			ans --;
			i ++;
		}
	}

	cout << ans << endl;

	return 0;
}
