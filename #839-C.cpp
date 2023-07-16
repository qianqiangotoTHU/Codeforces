#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int k,n;
		cin >> k >> n;
		int a[45];
		for(int i=0;i<=k;i++){
			a[i] = i;
		}
		int last = n;
		int dnum = 1;
		a[k] = n;
		for(int i=k-1;i>=1;i--){
			if(last-dnum > a[i]){
				a[i] = last-dnum;
				last = a[i];
				dnum++;
			}
			else break;
		}
		for(int i=1;i<=k;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
