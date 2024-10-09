#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n],c=0;

	for(int i=0;i<n;i++){
		cin>>a[i];

		if(a[i]%2==0){
			c++;
		}
	}
	if((n/2)<c){
		cout<<"READY FOR BATTLE\n";
	}
	else{
		cout<<"NOT READY\n";
	}

	return 0;
}