#include<bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
	int t;
	scanf("%lld",&t);
	while(t--){
		int n;
		scanf("%lld",&n);
		int p[2005]={0};
		int maxnum=0;
		int maxi;
		for(int i=0;i<n;i++){
			scanf("%lld",&p[i]);
			if(i!=0&&maxnum<p[i]){
				maxnum=p[i];
				maxi=i;
			}
		}
		if(n==1){
			printf("%lld",p[0]);
		}
		else if(maxi==n-1&&p[0]>p[maxi-1]){
			printf("%lld ",p[maxi]);
			for(int i=0;i<maxi;i++){
				printf("%lld ",p[i]);
			}
		}else{
			for(int i=maxi;i<n;i++){
				printf("%lld ",p[i]);
			}
			int ii=-1;
			for(int i=maxi-1;i>=0;i--){
				if(i!=maxi-1&&p[i]<p[0]){
					ii=i;
					break;
				}else{
					printf("%lld ",p[i]);
				}
			}
			for(int i=0;i<=ii;i++){
				printf("%lld ",p[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
