#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int a[4];
		for(int i=0;i<4;i++)
		{
			cin >> a[i];
		}
		int mini = a[0];
		int mins = 1;
		int maxi = a[0];
		int maxs = 1;
		for(int i=1;i<4;i++){
			if(a[i] < mini){
				mini = a[i];
				mins = i+1;
			}
			if(a[i] > maxi){
				maxi = a[i];
				maxs = i+1;
			}
		}
		int flag = 1;
		for(int i=0;i<4;i++){
			if((a[i] == mini && i+1 != mins) || (a[i] == maxi && i+1 != maxs)){
				flag = 0;
			}
		}
		if(mins+maxs != 5) flag = 0;
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
