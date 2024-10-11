#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		float x,y,s=0;
		cin>>x>>y;

		s = (100/x)*y;

		if(50<=s){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}