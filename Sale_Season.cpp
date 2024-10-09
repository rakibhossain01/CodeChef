#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		if(n<=100){
			cout<<n<<endl;
		}
		else if(100<n && n<=1000){
			cout<<n-25<<endl;
		}
		else if(1000<n && n<=5000){
			cout<<n-100<<endl;
		}
		else{
			cout<<n-500<<endl;
		}
	}
}