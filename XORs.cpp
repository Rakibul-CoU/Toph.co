#include<bits/stdc++.h>
using namespace std;
int t, n, m, a[100001], i, j, k, l, b[100001];
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        m=0;
      cin>>n;
      for(i=0; i<n; i++)
      {
          cin>>a[i];
      }
      if((n-1)%2==0)
        cout<<"0"<<endl;
      else
      {
          for(i=0; i<n; i++)
          {
              m=m^a[i];
          }
          cout<<m<<endl;
      }
    }
    return 0;
}
