#include<iostream>
using namespace std;

int main()
{
    int a,n,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<=15)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
