#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		float a,b,c,s=0;
		cin>>a>>b>>c;

	    s=(a+b+c)/3;
		if(s>c){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}