#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int space[30];
		int lastposition[30];
		for(int i=0;i<30;i++){
			space[i]=-1;
			lastposition[i]=-1;
		}
		int flag=1;
		int len=s.length();
		for(int i=0;i<len;i++){
			int j=s[i]-'a';
			if(lastposition[j]!=-1&&s[i]!=s[i-1]){
				space[j]=max(space[j],i-lastposition[j]-1);
			}
			if(lastposition[j]==-1){
				space[j]=i;
			}
			lastposition[j]=i;
			if(i!=0&&s[i]!=s[i-1]) flag=0;
		}
		int minspace=len;
		for(int i=0;i<26;i++){
			if(space[i]!=-1) {
				if(lastposition[i]!=-1&&space[i]!=-1) space[i]=max(space[i],len-lastposition[i]-1);
				minspace=min(minspace,space[i]);
			}
		}
		if(flag) cout << "0" << endl;
		else if(minspace==len) cout << (int)log2((len+1)/2)+1 << endl;
		else cout << (int)log2(minspace)+1 << endl;
	}
	return 0;
}
