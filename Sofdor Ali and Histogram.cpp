#include<bits/stdc++.h>
#define   ll   long long int
#define   sc    scanf
#define   pf    printf
using namespace std;
int main()
{
    ll t, i, n, m, a[100001], b, c, j=0;
    cin>>t;
    while(t--)
    {
        c=0;
        j++;
        cin>>n;
        for(i=0; i<n; i++)
        {
            sc("%lld", &a[i]);
        }
        for(i=0; i<n; i++){
            b=a[i]*((a[n-1]-a[i])+1);
            if(b>c)
                c=b;
        }
        pf("Case %lld: %lld\n", j, c);
    }
    return 0;
}
