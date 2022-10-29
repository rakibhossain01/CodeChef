#include<iostream>
using namespace std;

int main()
{
    int t,x,y,z,s;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>z;
        if(3>=x)
        {
            s=x*y;
            cout<<s<<endl;
        }
        else if(x%3==0)
        {
            s=(x*y)+(((x/3)-1)*z);
            cout<<s<<endl;
        }
        else
        {
            s=(x*y)+((x/3)*z);
            cout<<s<<endl;
        }
    }
    return 0;
}
