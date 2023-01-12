#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	for( int i = 0;i < n;i ++ ) 
	{
		if( s[i] == '"' ) {
			i ++;
			while( s[i] != '"' ) i ++;
				continue;
		}
		if( s[i] == ',' ) s[i] = '.';
	}

	cout << s ;
	return 0;
}
