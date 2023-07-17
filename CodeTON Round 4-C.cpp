#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,c,d;
		cin >> n >> c >> d;
		unsigned long long preans=0;
		set<int> arr;
		for(int i=0;i<n;i++){
			int ai;
			cin >> ai;
			if(arr.find(ai)!=arr.end()) preans+=c;
			else arr.insert(ai);
		}
		if(*arr.begin()!=1){
			arr.insert(1);
			preans+=d;
		}
		
		int add=0;
		int del=0;
		unsigned long long mincost=1e18;
		set<int>::iterator it=arr.begin();
		int len=arr.size();
		for(int i=1;it!=arr.end();it++,i++){
			if(it==arr.begin()) add=0;
			else{
				int a=*it;
				it--;
				int b=*it;
				it++;
				add += (a-b-1);
			}
			del = len-i;
			unsigned long long cost = (long long)add*(long long)d+(long long)del*(long long)c;
			if(cost<mincost) mincost=cost;
		}
		cout << mincost+preans << endl;
	}
	return 0;
}
