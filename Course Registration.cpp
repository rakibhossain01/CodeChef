#include<iostream>
using namespace std;

int main()
{
    int n,m,k,a;
    
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>n>>m>>k;
        if(n<=m-k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
