#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, j, k, l, m, a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        j=a[0];
        l=a[n-1];
        k=l-j;
        cout<<k<<endl;
    }
    return 0;
}
