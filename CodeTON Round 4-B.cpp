#include<bits/stdc++.h>
using namespace std;

long long maxi[45]={1,3};

int findi(long long x)
{
	int l=1,r=40;
	while(l<=r){
		int mid=(l+r)/2;
		if(x>maxi[mid]){
			l=mid;
		}else if(x>maxi[mid-1]){
			return mid;
		}else{
			r=mid;
		}
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	for(int i=2;i<=41;i++){
		maxi[i]=2*maxi[i-1]+1;
	}
	while(t--){
		int n;
		cin >> n;
		if(n%2==0||n>maxi[40]){
			cout << "-1" << endl;
			continue;
		}
		else{
			int index=findi(n);
			int sub=(maxi[index]-n)/2;
			int maxans=0;
			for(int i=0;i<index;i++){
				maxans+=pow(2,i);
			}
			int thisans=maxans-sub;
			int ans[40];
			for(int i=index;i>0;i--){
				ans[i]=(thisans&1)+1;
				thisans>>=1;
			}
			cout << index << endl;
			for(int i=1;i<=index;i++){
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
