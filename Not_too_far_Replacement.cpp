#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,sum=0;
		cin>>n;

		int a[n+1];

		for(int i=0;i<=n;i++){
			cin>>a[i];
		}
		sort(a,a+(n+1));
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(a[j]<=(2*a[n])){
				   swap(a[i],a[n]);
			    }
			}
		}
			//cout<<a[i]<<" ";
		for(int i=0;i<=n;i++){
			//sum+=a[i];
			cout<<a[i]<<" ";
		}
		cout<<endl;
		//cout<<sum<<endl;
	}
}