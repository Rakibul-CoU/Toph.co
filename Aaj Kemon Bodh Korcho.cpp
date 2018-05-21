#include<bits/stdc++.h>
#define pf printf
using namespace std;
int main()
{
    long long int t, n, m, j=0, k, l, i, a, b;
    char st[100006];
    cin>>t;
    while(t--)
    {
        scanf("%s", st);

        l=strlen(st);
        a=0;
        b=0;
        j++;
        for(i=0; i<l; i++)
        {
            if(st[i]=='B')
                a++;
                else if(st[i]=='M')
                    b++;
        }
        if(b>a)
            pf("Case #%lld: Hala Madrid\n", j);
        else if(a>b)
            pf("Case #%lld: Aaj Kemon Bodh Korcho\n", j);
        else if(a==b)
           {
               pf("Case #%lld: Meh :\n", j);
               }
    }
    return 0;
}
