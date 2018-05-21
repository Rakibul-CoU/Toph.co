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
    int n, m=0, i, j, k=0, a[1000], t, l, b[1000];
    sc("%d", &t);
    while(t--)
    {
        k++;
        for(i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sc("%d", &n);
        if((a[1]-a[0])!=(a[2]-a[1]))
            pf("Case %d: Error\n", k);
        else
        {
            m=a[1]-a[0];
            int p=a[0]+(n-1)*m;
            pf("Case %d: %d\n", k,p);
        }
    }
    return 0;
}
