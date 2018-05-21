#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t, a, b, i, l;
    cin>>a>>b;
    if(a%2==0 && b%2!=0)
        l=(b-a+1)/2;
    else if(a%2==0 && b%2==0)
        l=(b-a)/2;
    else if(a%2!=0 && b%2!=0)
        l=((b-a)/2)+1;
    else if(a%2!=0 && b%2==0)
        l=((b-a)+1)/2;
    cout<<l<<endl;
    return 0;
}
