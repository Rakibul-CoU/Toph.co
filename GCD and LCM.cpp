#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, m, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=__gcd(a,b);
        m=a*b;
        c=m/n;
        if(c==m)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
