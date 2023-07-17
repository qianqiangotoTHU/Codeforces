#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string ans="NO";
		for(int i=1;i<=n;i++){
			int an;
			cin >> an;
			if(an<=i) ans="YES";
		}
		cout << ans << endl;
	}
	return 0;
}
