#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        if(b==a || b>=2*a)
        {
            cout<<"YES"<<endl;;
            continue;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
