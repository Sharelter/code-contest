#include<bits/stdc++.h>

using namespace std;

bool is_uppercase(char c)
{
	if(c >= 'A' && c <= 'Z') return true;
	else return false;
}

int main()
{
	string s;
	cin >> s;
	if( s.length() != 8 ) {
		cout << "No";
	}
	else {
		bool flag = true;
		if( is_uppercase(s[0]) == false ) flag = false;
		for(int i = 1;i < 7;i ++) if( !isdigit(s[i]) ) flag = false;
		if( is_uppercase(s[7]) == false ) flag = false;
		if( s[1] < '1' ) flag = false;
		if( flag ) cout << "Yes";
		else cout << "No";
	}
	return 0;
}
