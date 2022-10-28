#include<iostream>
using namespace std;

int main()
{
    int t,x,y,s;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        s=((x%y)+(x/y));
        cout <<s<<endl;
    }
    return 0;
}
