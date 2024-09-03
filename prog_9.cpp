#include<bits/stdc++.h>
using namespace std;

class MobilePhone{
    private:
        string brand;
        string model;
        int price;
    public:
        
        MobilePhone(string b, string m, int p){
            brand=b;
            model=m;
            price=p;
        }
        
};


int main(){
    MobilePhone obj("realme", "realme 6",2400);
    return 0;
}
