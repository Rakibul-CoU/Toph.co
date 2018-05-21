#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a=0, b;
    cin>>t;
    while(t--)
    {
        a++;
        cin>>n>>m;
        b=(n*n)+(m*m);
        printf("Case %d: %d\n", a, b);
    }
    return 0;
}
