#include <iostream>
using namespace std;
class Account {
    private:
        string name;
        double amount;
    public:
        Account(){
            amount = 0.0;
            name = "";
        }
        Account(string na){
            name = na;
            amount = 0.0;
        }
        Account(double n){
            name = "";
            amount = n;
        }
        Account(string na,double n);
        void deposit(double n){
            amount += n;
        }
        void withdraw(double n){
            amount -= n;
        }
        double getBalance();
        void setBalance(double n);
        string getName() {return name;}
        void setName(string na) {name = na; }
        void transfer(Account &a,double n){
            withdraw(n);
            a.deposit(n);
        }
};

Account::Account(string na,double n){
    name=na;
    amount = n;
}
double Account::getBalance(){
    return amount;
}
void Account::setBalance(double n){
    amount = n;
};
int main(){
    Account acct1,acct2("Peng"),acct3(500),acct4("MeRich",600),*pacct;
    pacct = &acct2;
    cout << acct3.getBalance() << " "<< acct4.getBalance() <<endl;
    acct3.transfer(acct4,50);
    cout << acct3.getBalance() << " "<< acct4.getBalance();

}