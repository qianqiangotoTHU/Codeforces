#include<bits/stdc++.h>
using namespace std;

int main()
{
	#define int long long
	int t;
	scanf("%lld",&t);
	while(t--){
		int m[100]={0};
		int n;
		scanf("%lld",&n);
		char s[100];
		scanf("%s",s);
		for(int i=1;i<n;i++){
			int ten = (s[i-1]-'a')*10;
			int one = (s[i]-'a');
			m[ten+one]=1;
		}
		int ans = 0;
		for(int i=0;i<100;i++){
			if(m[i]==1) ans++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
