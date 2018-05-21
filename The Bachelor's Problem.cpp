/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
    **/
#include<bits/stdc++.h>
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
using namespace std;
int main()
{
    int t, n=0, m, a[2002], b[20002], i, j, l;
    cin>>t;
    while(t--)
    {
        n++;
        int x=0;
        int y=0;
        for(i=0; i<6; i++)
        {
            cin>>a[i];
            x=x+a[i];
        }
        cin>>m;
        for(i=0; i<6; i++)
        {
            cin>>b[i];
            y=y+b[i];
        }
        if(m>x)
        {
            j=y-(m-x);
            pf("Case %d: %d\n", n, j);
        }
        else
        {
             j=y-(x-m);
             pf("Case %d: %d\n", n, j);
        }
    }
    return 0;
}
