#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int len=s.length();
		if(len==1)
		{
			if(s[0]=='_') cout<<"2"<<endl;
			else cout<<"1"<<endl;
		}else{
			int ans=0;
			int coun=0;
			for(int i=0;i<len;i++){
				if(s[i]=='_'){
					if(i==0) ans++;
					coun++;
					if(i==len-1){
						ans+=coun;
					}
					
				}else{
					ans+=max(0,coun-1);
					coun=0;
				}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
