#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[200005];
		int a2[200005];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			cin >> a2[i];
		}
		pair<int,int>ans(0,0);
		pair<int,int>tmp(-1,-1);
		int flag=0;
		for(int i=1;i<n;i++){
			if(a2[i]>=a2[i-1])
			{
				if(tmp.first==-1){
					tmp.first=i-1;
				}
				if(a2[i-1]!=a[i-1]){
					flag=1;
				}
				if(i==n-1&&flag==1){
					tmp.second=i;
					int tlen=tmp.second-tmp.first;
					int alen=ans.second-ans.first;
					if(tlen>alen){
						ans=tmp;
					}
				}
			}
			else{
				if(flag==1){
					tmp.second=i-1;
					int tlen=tmp.second-tmp.first;
					int alen=ans.second-ans.first;
					if(tlen>alen){
						ans=tmp;
					}
				}
				flag=0;
				tmp=pair<int,int>(-1,-1);
			}
		}
		cout << ans.first+1 << " " << ans.second+1 << endl;
	}
	return 0;
}
