#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;

	cin >> s >> t;

	int slen = s.length(), tlen = t.length();
	if(tlen > slen) 
	{
		cout << "No" ;
		return 0;
	}
	bool flag = false;

	for(int i = 0;i < slen - tlen + 1;i ++) 
		if( s.substr( i, tlen ) == t )
		{
			flag = true;
			break;
		}

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
