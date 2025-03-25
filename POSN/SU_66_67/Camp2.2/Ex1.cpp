#include <iostream>
using namespace std;
const int NUMBER = 12;
int main() {
    int firstNum;
    int secondNum;
    firstNum = 18;
    cout << "FirstNum = " << firstNum << endl;
    cout << "Enter an interger: ";
    cin >> secondNum;
    cout << endl;
    cout << "SecondNum = " << secondNum << endl;
    firstNum = firstNum + NUMBER + 2 * secondNum;
    cout << "IThe new value of " << "firstNum = " << firstNum << endl;
    return 0;    
}
