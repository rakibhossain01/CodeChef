#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int x,m;
		cin>>x>>m;

		if(m>=x){
			cout<<0<<endl;
		}
		else{
			cout<<x-m<<endl;
		}
	}

	return 0;
}