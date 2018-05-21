#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, j, i, a, b, l;
    char st[1006];
    while(scanf("%s", st)!=EOF)
    {
        a=0;
        l=strlen(st);
        for(i=0; i<l; i++)
        {
            a=a+(st[i]-'0');
        }
        cout<<a<<endl;
    }
    return 0;
}
