#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a, b, c, d, i, j, k, l;
    string st;
    cin>>t;
    while(t--)
    {
        cin>>st>>n;
        if(st == "January")
        {
            if(n>=1 && n<=9)
            {
                k=n%10;
                cout<<"S01E0"<<k<<endl;
            }
            else if(n==10)
            {
                cout<<"S01E10"<<endl;
            }
            else if(n>=11 && n<=19)
            {
                k=n%10;
                cout<<"S02E0"<<k<<endl;
            }
            else if(n==20)
            {
                cout<<"S02E10"<<endl;
            }
            else if(n>=21 && n<=29)
            {
                k=n%10;
                cout<<"S03E0"<<k<<endl;
            }
            else if(n==30)
            {
                cout<<"S03E10"<<endl;
            }
            else if(n==31)
                cout<<"S04E01"<<endl;
        }
        else if(st == "February")
        {
            if(n>=1 && n<=8)
            {
                k=n%10;
                cout<<"S04E0"<<k+1<<endl;
            }
            else if(n==9)
                cout<<"S04E10"<<endl;
            else if(n==10)
                cout<<"S05E01"<<endl;
            else if(n>=11 && n<=19)
            {
                k=n%10;
                cout<<"S05E0"<<k+1<<endl;
            }
            else if(n==20)
                cout<<"S06E01"<<endl;
            else if(n>=21 && n<=28)
            {
                k=n%10;
                cout<<"S06E0"<<k+1<<endl;
            }
        }
        else if(st == "March")
        {
            if(n==1)
                cout<<"S06E10"<<endl;
            else if(n>=2 && n<=8)
            {
                k=n%10;
                cout<<"S07E0"<<k-1<<endl;
            }
            else if(n==9)
            {
                cout<<"S01E01"<<endl;
            }
            else if(n==10)
            {
                cout<<"S01E02"<<endl;
            }
            else if(n>=11 && n<=17)
            {
                k=n%10;
                cout<<"S01E0"<<k+2<<endl;
            }
            else if(n==18)
            {
                cout<<"S01E10"<<endl;
            }
            else if(n==19)
            {
                cout<<"S02E01"<<endl;
            }
            else if(n==20)
            {
                cout<<"S02E02"<<endl;
            }
            else if(n>=21 && n<=27)
            {
                k=n%10;
                cout<<"S02E0"<<k+2<<endl;
            }
            else if(n==28)
            {
                cout<<"S02E10"<<endl;
            }
            else if(n==29)
            {
                cout<<"S03E01"<<endl;
            }
            else if(n==30)
            {
                cout<<"S03E02"<<endl;
            }
            else if(n==31)
            {
                cout<<"S03E03"<<endl;
            }
        }
        else if(st == "April")
        {
            if(n>=1 && n<=6)
            {
                 k=n%10;
                cout<<"S03E0"<<k+3<<endl;
            }
            else if(n==7)
            {
                cout<<"S03E10"<<endl;
            }
            else if(n==8)
            {
                cout<<"S04E01"<<endl;
            }
            else if(n==9)
            {
                cout<<"S04E02"<<endl;
            }
            else if(n==10)
            {
                cout<<"S04E03"<<endl;
            }
            else if(n>=11 && n<=16)
            {
                 k=n%10;
                cout<<"S04E0"<<k+3<<endl;
            }
            else if(n==17)
            {
                cout<<"S04E10"<<endl;
            }
            else if(n==18)
            {
                cout<<"S05E01"<<endl;
            }
            else if(n==19)
            {
                cout<<"S05E02"<<endl;
            }
            else if(n==20)
            {
                cout<<"S05E03"<<endl;
            }
            else if(n==21)
            {
                cout<<"S05E04"<<endl;
            }
            else if(n>=22 && n<=26)
            {
                k=n%10;
                cout<<"S05E0"<<k+3<<endl;
            }
            else if(n==27)
            {
                 cout<<"S05E10"<<endl;
            }
            else if(n==28)
            {
                 cout<<"S06E01"<<endl;
            }
            else if(n==29)
            {
                 cout<<"S06E02"<<endl;
            }
            else if(n==30)
            {
                 cout<<"S06E03"<<endl;
            }
        }
        else if(st == "May")
        {
            if(n>=1 && n<=6)
            {
                k=n%10;
                cout<<"S06E0"<<k+3<<endl;
            }
            else if(n==7)
            {
                 cout<<"S06E10"<<endl;
            }
            else if(n==8)
            {
                 cout<<"S07E01"<<endl;
            }
            else if(n==9)
            {
                 cout<<"S06E02"<<endl;
            }
            else if(n==10)
            {
                 cout<<"S06E03"<<endl;
            }
            else if(n==11)
            {
                 cout<<"S06E04"<<endl;
            }
            else if(n>=12 && n<=16)
            {
                k=n%10;
                cout<<"S06E0"<<k+3<<endl;
            }

            else if(n==17)
            {
                 cout<<"S06E10"<<endl;
            }
            else if(n==18)
            {
                 cout<<"S07E01"<<endl;
            }
            else if(n==19)
            {
                 cout<<"S07E02"<<endl;
            }
            else if(n==20)
            {
                 cout<<"S07E03"<<endl;
            }
            else if(n>=21 && n<=24)
            {
                 k=n%10;
                cout<<"S07E0"<<k+3<<endl;
            }
            else if(n>=25 && n<=29)
            {
                 k=n%10;
                cout<<"S01E0"<<k-4<<endl;
            }
            else if(n==30)
            {
                 cout<<"S01E06"<<endl;
            }
            else if(n==31)
            {
                 cout<<"S01E07"<<endl;
            }
        }
        else if(st == "June")
        {
            if(n>=1 && n<=2)
            {
                k=n%10;
                cout<<"S01E0"<<k+7<<endl;
            }
             else if(n==3)
            {
                 cout<<"S01E10"<<endl;
            }
            else if(n>=4 && n<=9)
            {
                k=n%10;
                cout<<"S02E0"<<k-3<<endl;
            }
             else if(n==10)
            {
                 cout<<"S02E07"<<endl;
            }
            else if(n>=11 && n<=12)
            {
                k=n%10;
                cout<<"S02E0"<<k+7<<endl;
            }
            else if(n==13)
            {
                 cout<<"S02E10"<<endl;
            }
            else if(n>=14 && n<=19)
            {
                k=n%10;
                cout<<"S03E0"<<k-3<<endl;
            }
             else if(n==20)
            {
                 cout<<"S03E07"<<endl;
            }
             else if(n==21)
            {
                 cout<<"S03E08"<<endl;
            }
             else if(n==22)
            {
                 cout<<"S03E09"<<endl;
            }
             else if(n==23)
            {
                 cout<<"S03E10"<<endl;
            }
            else if(n>=24 && n<=29)
            {
                k=n%10;
                cout<<"S04E0"<<k-3<<endl;
            }
            else if(n==30)
            {
                 cout<<"S04E07"<<endl;
            }

        }
        else if( st == "July")
        {
           if(n==1)
            {
                 cout<<"S04E08"<<endl;
            }
            else if(n==2)
            {
                 cout<<"S04E09"<<endl;
            }
            else if(n==3)
            {
                 cout<<"S04E10"<<endl;
            }
            else if(n>=4 && n<=9)
            {
                 k=n%10;
                cout<<"S05E0"<<k-3<<endl;
            }
             else if(n==10)
            {
                 cout<<"S05E07"<<endl;
            }
             else if(n==11)
            {
                 cout<<"S05E08"<<endl;
            }
             else if(n==12)
            {
                 cout<<"S05E09"<<endl;
            }
             else if(n==13)
            {
                 cout<<"S05E10"<<endl;
            }
            else if(n>=14 && n<=19)
             {
                 k=n%10;
                cout<<"S06E0"<<k-3<<endl;
             }
             else if(n==20)
            {
                 cout<<"S06E07"<<endl;
            }
            else if(n==21)
            {
                 cout<<"S06E08"<<endl;
            }
            else if(n==22)
            {
                 cout<<"S06E09"<<endl;
            }
            else if(n==23)
            {
                 cout<<"S06E10"<<endl;
            }
            else if(n>=24 && n<=29)
            {
                 k=n%10;
                cout<<"S07E0"<<k-3<<endl;
            }
            else if(n==30)
            {
                 cout<<"S07E07"<<endl;
            }
            else if(n==31)
            {
                 cout<<"S01E01"<<endl;
            }
        }
        else if(st == "August")
        {
            if(n>=1 && n<=8)
            {
                k=n%10;
                cout<<"S01E0"<<k+1<<endl;
            }
             else if(n==9)
            {
                 cout<<"S01E10"<<endl;
            }
             else if(n==10)
            {
                 cout<<"S02E01"<<endl;
            }
            else if(n>=11 && n<=18)
            {
                                k=n%10;
                cout<<"S02E0"<<k+1<<endl;
            }
            else if(n==19)
            {
                 cout<<"S02E10"<<endl;
            }
            else if(n==20)
            {
                 cout<<"S03E01"<<endl;
            }
            else if(n>=21 && n<=28)
            {
                                k=n%10;
                cout<<"S03E0"<<k+1<<endl;
            }
            else if(n==29)
            {
                 cout<<"S03E10"<<endl;
            }
            else if(n==30)
            {
                 cout<<"S04E01"<<endl;
            }
            else if(n==31)
            {
                 cout<<"S04E02"<<endl;
            }
        }
        else if(st == "September")
        {
            if(n>=1 && n<=7)
            {
                k=n%10;
                cout<<"S04E0"<<k+2<<endl;
            }
            else if(n==8)
            {
                 cout<<"S04E10"<<endl;
            }
            else if(n==9)
            {
                 cout<<"S05E01"<<endl;
            }
            else if(n==10)
            {
                 cout<<"S05E02"<<endl;
            }
            else if(n>=11 && n<=17)
            {
                k=n%10;
                cout<<"S05E0"<<k+2<<endl;
            }
            else if(n==18)
            {
                 cout<<"S05E10"<<endl;
            }
            else if(n==19)
            {
                 cout<<"S06E01"<<endl;
            }
            else if(n==20)
            {
                 cout<<"S06E02"<<endl;
            }
            else if(n>=21 && n<=27)
            {
                k=n%10;
                cout<<"S06E0"<<k+2<<endl;
            }
            else if(n==28)
            {
                 cout<<"S06E10"<<endl;
            }
            else if(n==29)
            {
                 cout<<"S07E01"<<endl;
            }
            else if(n==30)
            {
                 cout<<"S07E02"<<endl;
            }
        }
        else if(st == "October")
        {
            if(n>=1 && n<=5)
            {
                 k=n%10;
                cout<<"S07E0"<<k+2<<endl;
            }
            else if(n>=6 && n<=9)
                {
                    k=n%10;
                cout<<"S01E0"<<k-5<<endl;
                }
                 else if(n==10)
            {
                 cout<<"S01E05"<<endl;
            }
            else if(n>=11 && n<=14)
            {
                k=n%10;
                cout<<"S01E0"<<k+5<<endl;
            }
            else if(n==15)
            {
                 cout<<"S01E10"<<endl;
            }
            else if(n>=16 && n<=19)
            {
                k=n%10;
                cout<<"S02E0"<<k-5<<endl;
            }
            else if(n==20)
            {
                 cout<<"S02E05"<<endl;
            }
            else if(n>=21 && n<=24)
            {
                k=n%10;
                cout<<"S02E0"<<k+5<<endl;
            }
             else if(n==25)
            {
                 cout<<"S02E10"<<endl;
            }
            else if(n>=26 && n<=29)
            {
                k=n%10;
                cout<<"S03E0"<<k-5<<endl;
            }
            else if(n==30)
            {
                 cout<<"S02E10"<<endl;
            }
            else if(n==31)
            {
                 cout<<"S03E01"<<endl;
            }
        }
        else if(st == "November")
        {
            if(n>=1 && n<=8)
            {
                k=n%10;
                cout<<"S03E0"<<k+1<<endl;
            }
            else if(n==9)
            {
                 cout<<"S03E10"<<endl;
            }
            else if(n==10)
            {
                 cout<<"S04E01"<<endl;
            }
            else if(n>=11 && n<=18)
            {
                 k=n%10;
                cout<<"S04E0"<<k+1<<endl;
            }
             else if(n==19)
            {
                 cout<<"S04E10"<<endl;
            }
             else if(n==20)
            {
                 cout<<"S05E01"<<endl;
            }
            else if(n>=21 && n<=28)
            {
                k=n%10;
                cout<<"S05E0"<<k+1<<endl;
            }
            else if(n==29)
            {
                 cout<<"S05E10"<<endl;
            }
            else if(n==30)
            {
                 cout<<"S06E01"<<endl;
            }
        }
        else if(st == "December")
        {
            if(n>=1 && n<=8)
            {
                k=n%10;
                cout<<"S06E0"<<k+1<<endl;
            }
            else if(n==9)
            {
                 cout<<"S06E10"<<endl;
            }
            else if(n==10)
            {
                 cout<<"S07E01"<<endl;
            }
            else if(n>=11 && n<=16)
            {
                k=n%10;
                cout<<"S07E0"<<k+1<<endl;
            }
            else if(n>=17 && n<=19)
            {
                k=n%10;
                cout<<"S01E0"<<k-6<<endl;
            }
            else if(n==20)
            {
                 cout<<"S01E04"<<endl;
            }
            else if(n>=21 && n<=25)
            {
                k=n%10;
                cout<<"S01E0"<<k+4<<endl;
            }
            else if(n==26)
            {
                 cout<<"S01E10"<<endl;
            }
            else if(n>=27 && n<=29)
            {
                k=n%10;
                cout<<"S02E0"<<k-6<<endl;

            }
             else if(n==30)
            {
                 cout<<"S02E04"<<endl;
            }
             else if(n==31)
            {
                 cout<<"S02E05"<<endl;
            }
        }
    }
    return 0;
}
