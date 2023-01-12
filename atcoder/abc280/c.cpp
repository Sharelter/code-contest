#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;

	cin >> s >> t;

	int slen = s.length(), tlen = t.length();

	for( int i = 0;i < tlen; i ++ )
	{
		if( i >= slen || s[i] != t[i] ) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}
