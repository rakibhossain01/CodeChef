#include<iostream>
using namespace std;

int main()
{
    int n,k,a,i,count=0;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%k==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
