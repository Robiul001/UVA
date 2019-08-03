#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,day,month,year,day1,month1,year1,old_day1,old_month1,old_year1;
    string str,oldest,youngest;
    cin>>n;
    cin>>str;
    cin>>day>>month>>year;
    n--;
    oldest = str;
    youngest = str;

    day1=day;
    month1=month;
    year1=year;

    old_day1=day;
    old_month1=month;
    old_year1=year;

    while(n--)
    {
        cin>>str;
        cin>>day>>month>>year;

        if(year<old_year1)
        {
            oldest = str;
            old_day1=day;
            old_month1=month;
            old_year1=year;
        }
        else if(year==old_year1 && month<old_month1)
        {
            oldest = str;
            old_day1=day;
            old_month1=month;
            old_year1=year;
        }
        else if(year==old_year1 && month==old_month1 && day<old_day1)
        {
            oldest = str;
            old_day1=day;
            old_month1=month;
            old_year1=year;
        }
        else{}


        if(year>year1)
        {
            youngest = str;
            day1=day;
            month1=month;
            year1=year;
        }
        else if(year==year1 && month>month1)
        {
            youngest = str;
            day1=day;
            month1=month;
            year1=year;
        }
        else if(year==year1 && month==month1 && day>day1)
        {
            youngest = str;
            day1=day;
            month1=month;
            year1=year;
        }
        else{}
    }
    cout<<youngest<<endl<<oldest<<endl;
    return 0;
}
