#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        int accountnumber;
        int balance;
        string accountholdername;
    public:
        void deposit(int b){
            balance+=b;
            cout<<balance<<endl;
        }
        void withdraw(int b){
            balance-=b;
            cout<<balance<<endl;
        }
        
};


int main(){
    BankAccount obj;
    obj.deposit(200);
    obj.withdraw(50);
    
    
    return 0;
}
