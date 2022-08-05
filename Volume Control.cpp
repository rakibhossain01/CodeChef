#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i,x;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x=a-b;
        if(x<0)
        {
            cout<<x*(-1)<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
