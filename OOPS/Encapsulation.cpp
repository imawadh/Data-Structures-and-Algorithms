# include <iostream>
# include <string>
using namespace std;
// Encapsulation is nothing but putting data members and functions within a class 
class Account{
    public:
        string name;
        string account_number;
    private: 
        double balance;// data hiding 
    
    public:
        void setBalance(double b){
            balance = b;
        }
        double getbalance(){
            return balance;
        }
};
int main(){
    Account a1;
    a1.name="Awadh";
    a1.account_number="12346765";
    a1.setBalance(34567);
    cout<<"Initial Balance : "<< a1.getbalance()<<'\n';
    cout<<"Initial Name = "<<a1.name<<'\n';
    a1.name = "Awadh Kishor Singh";
    cout<<"Full Name = "<<a1.name<<'\n';
    a1.setBalance(3456l);
    cout<<"Final Balance : "<< a1.getbalance()<<'\n';
    Account a2;
    a2.setBalance(78);
    cout<<a1.getbalance()-a2.getbalance()<<'\n';

}