#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int z=0;
        z=k/x;
        if(z>=n)
            cout<<n<<endl;
        else
            cout<<z<<endl;
    }
    return 0;
}
