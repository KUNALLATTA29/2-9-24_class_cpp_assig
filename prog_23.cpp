#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        int productid;
        string name;
        int price;
    public:
        void set(int id, string na, int pr){
            productid=id;
            name=na;
            price=pr;
        }
        
        void get(){
            cout<<productid<<" "<<name<<" "<<price;
        }
};


int main(){
    Product obj;
    obj.set(123, "sweet",250 );
    obj.get();
    return 0;
}
