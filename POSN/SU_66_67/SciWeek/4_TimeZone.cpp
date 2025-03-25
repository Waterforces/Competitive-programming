#include<bits/stdc++.h>
using namespace std;
string dmy,hm,namemon[13]={"","January","Febr uary","March","April","May","June","July","August","September","October","November","December"};
int n,mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> dmy >> hm >> n;
    int day = (dmy[0]-'0')*10+(dmy[1]-'0'),month = (dmy[2]-'0')*10+(dmy[3]-'0'),year=((dmy[4]-'0')*1000+(dmy[5]-'0')*100+(dmy[6]-'0')*10+(dmy[7]-'0'));
    int hour = ((hm[0]-'0')*10+(hm[1]-'0')),min = ((hm[2]-'0')*10+(hm[3]-'0'));
    hour+=n;
    if(hour>23) {
        hour-=24;
        day++;
        if(day>mon[month]) {
            month++;
            // cout << month << endl;
            if(month>12) {
                // cout << "A";
                month%=12;
                year++;
            }
            day=1;
        }
    }
    else if(hour<0) {
        hour+=24;
        day--;
        if(day<1) {
            month--;
            if(month<1) {
                year--;
                month=12;
            }
            day=mon[month];
        }
    }
    cout << day << " " << namemon[month] << " " << year << "\n";
    if(hour<10) cout << 0;
    cout << hour << " : ";
    if(min<10) cout << 0;
    cout << min;
    // cout << endl << month;
}