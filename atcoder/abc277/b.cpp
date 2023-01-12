#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> s(n);

	for( int i = 0;i < n;i ++ ) cin >> s[i];

	bool flag = true;

	string first="HDCS", second="A23456789TJQK";

	for( int i = 0;i < n;i ++ ) {
		if( !count(first.begin(), first.end(), s[i][0]) ) flag = false;
		if( !count(second.begin(), second.end(), s[i][1]) ) flag = false;
	}

	sort( s.begin(), s.end() );

	for( int i = 0;i < n - 1;i ++) 
	{
		if( s[i] == s[i + 1] ) flag = false;
	}

	if( flag ) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
