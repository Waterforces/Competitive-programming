#include <iostream>
using namespace std;
int main() {
    float a,b,c,sum,avg;
    cout << "Enter 1st number ";
    cin >> a;
    cout << "Enter 2nd number ";
    cin >> b;
    cout << "Enter 3rd number ";
    cin >> c;
    sum = a+b+c;
    avg = sum/3;
    cout << "InSum of 3 numbers ["<<a<<"+"<<b<<"+3"<<c<<"]=" <<sum<<"\n";
    cout << "Average of 3 numbers ["<<a<<","<<b<<","<<c<<"]="<< avg;
    return 0;    
}
