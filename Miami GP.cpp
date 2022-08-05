#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float a,b,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x=a*1.07;
        if(x>=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
