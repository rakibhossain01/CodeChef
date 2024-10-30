#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,cnt=0,st=0;
		cin>>n;

		if(n==1){
			cout<<-1<<endl;
		}
		else{
			for(int i=1;i<=n;i++){
			if(i%2==0){
				if(n%i==0){
					cnt++;
				}
			}
			else{
				if(n%i==0){
					st++;
				}
			}
		}
		if(cnt>st){
			cout<<1<<endl;
		}
		else if(cnt==st){
			cout<<0<<endl;
		}
		else if(cnt<st){
			cout<<-1<<endl;
		}
		}
	}

	return 0;
}