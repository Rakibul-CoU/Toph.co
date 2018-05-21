#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m=0, i, j, k, l, a, b, c[10003];
    cin>>t;
    while(t--)
    {
        m++;
        l=0;
        cin>>n;
        cin>>a>>b;
        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                k=c[i]+c[j];
                if(k>=a && k<=b)
                   l++;
            }
        }
        printf("Case %d: %d\n", m, l);
    }
    return 0;
}
