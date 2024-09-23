# include <iostream>
# include <string>
using namespace std;

class Account{
    public:
        Account(string n, string a, double b){
            name = n;
            account_number = a;
            balance = b;
        }
        // Constructor Overloading
        Account (string n,string a)
        {
            name = n;
            account_number =a;
            balance = 98765;
        }
        // Constructor Overloading
        Account (){

        }

        string name;
        string account_number;
        double balance;

    void getinfo(){
        cout<<"Name : "<<name<<" Account Number : "<<account_number<<" Balance : "<<balance<<'\n';
        
    }
    
    
};
int main(){
    Account a1("Awadh","123456789",76543456);
    a1.getinfo();
    a1.name = "Awadh Kishor Singh";
    a1.getinfo();
    Account a2;
    Account a3("Kishor","87654");
    a3.getinfo();
    a2.getinfo();
    

}