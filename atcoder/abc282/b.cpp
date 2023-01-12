#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;

	cin >> n >> m;
	char s[n][m + 1];
	for( int i = 0;i < n;i ++ ) cin >> s[i];

	int cnt = 0;
	for(int i = 0;i <  n;i ++) 
		for( int j = i + 1;j < n;j ++ ) 
		{
			bool flag = 1;
			for(int k = 0;k < m;k ++) 
				if(s[i][k] == 'x' && s[j][k] == 'x') flag = 0;

			if(flag) cnt ++;
		}

	cout << cnt << endl;
	return 0;
}
