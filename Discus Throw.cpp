#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;
        int high=max(a,b);
        int ans=max(high,c);

        cout<<ans<<endl;
    }
    return 0;
}
