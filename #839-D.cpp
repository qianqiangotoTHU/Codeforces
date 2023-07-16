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
		cin >> a[0];//input the first number
		int last = a[0];
		int minx = 0;
		int maxx = 1e9;
		//input
		for(int i=1;i<n;i++)
		{
			cin >> a[i];
			if(last < a[i])
				maxx=min(maxx,(last+a[i])/2);
			if(last > a[i])
				minx=max(minx,(last+a[i]+1)/2);
			last = a[i];
		}
		//output
		if(minx<=maxx) cout << minx << endl;
		else cout << "-1\n";
	}
	return 0;
}
