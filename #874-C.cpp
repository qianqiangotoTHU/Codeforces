#include<bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
	int t;
	cin >> t;
	while(t--){
		int n;
		scanf("%lld",&n);
		int minnum=1e10;
		int flag=0;
		for(int i=0;i<n;i++){
			int ai;
			scanf("%lld",&ai);
			minnum=min(minnum,ai);
			if(ai%2) flag=1;
		}
		if(minnum%2) printf("YES\n");
		else if(flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
