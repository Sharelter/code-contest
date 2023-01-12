#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	int szs = s.size(), szt = t.size();

	if( szs > szt ) {
		cout << "No";
		return 0;
	}

	bool flag = true;
	for( int i = 0;i < szs;i ++ ) 
	{
		if( s[i] != t[i] ) flag = false;
	}

	cout << ( flag ? "Yes" : "No" ) << endl;

	return 0;
}
