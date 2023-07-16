#include<bits/stdc++.h>
using namespace std;
#define PLL pair<long long,long long>

int main()
{
#define int long long
	int t;
	scanf("%lld",&t);
	while(t--){
		int n,k;
		scanf("%lld%lld",&n,&k);
		vector<PLL> a;
		for(int i=0;i<n;i++){
			int ai;
			scanf("%lld",&ai);
			a.push_back({ai,i});
		}
		sort(a.begin(),a.end());
		int b[100005];
		for(int i=0;i<n;i++){
			scanf("%lld",&b[i]);
		}
		sort(b,b+n);
		vector<PLL> ans;
		for(int i=0;i<n;i++){
			ans.push_back({a[i].second,b[i]});
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<n;i++){
			printf("%lld ",ans[i].second);
		}
		printf("\n");
	}
	return 0;
}
