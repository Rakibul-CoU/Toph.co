#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, i, j, k, l;
    while(scanf("%lld %lld", &n, &m)!=EOF)
    {
        if(n>m)
            swap(n, m);
        l=(m*(m+1))/2;
        k=n-1;
        j=(k*(k+1))/2;
        i=l-j;
        printf("Sum of %lld to %lld is -> %lld;\n", n, m, i);
    }
    return 0;
}
