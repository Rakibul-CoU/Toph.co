#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t, x, a, b;
    cin>>t;
    while(t--)
    {
        cin>>x;
        a=((3*(1/x)*(1/x))-x*x)/8;
        if(x==0)
            cout<<"Undefined"<<endl;
        else
            printf("%.2lf\n", a);
    }
    return 0;
}
