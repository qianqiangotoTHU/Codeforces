#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		int ans=1;
		for(int i=0;i<len;i++){
			if(s[i]=='?'){
				if(i==0) ans*=9;
				else ans*=10;
			}
			if(s[0]=='0'){
				ans=0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
