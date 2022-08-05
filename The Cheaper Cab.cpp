#include<iostream>
using namespace std;

int main()
{
    int n,a,b,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        if(a<b)
        {
            cout<<"FIRST"<<endl;
        }
        else if(a==b)
        {
            cout<<"ANY"<<endl;
        }
        else
        {
            cout<<"SECOND"<<endl;
        }
    }
}
