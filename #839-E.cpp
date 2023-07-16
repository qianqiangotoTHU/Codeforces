#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int p[500005];
		int fir = 0;
		int sec = 0;
		int all = 0;
		for(int i=0;i<n;i++){
			cin >> p[i];
			if(p[i]!=i+1&&p[i]!=n-i) all++;
			else if(p[i]!=i+1) fir++;
			else if(p[i]!=n-i) sec++;
		}
		if(fir<=sec-all) cout << "First" <<endl;
		else if(sec<fir-all) cout << "Second" << endl;
		else cout << "Tie" << endl;
	}
	return 0;
}
