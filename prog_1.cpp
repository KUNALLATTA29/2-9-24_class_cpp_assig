#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
        string model;
        string manufacturer;
        int price;
    public:
        Car(string m, string manu, int p){
            model=m;
            manufacturer=manu;
            price=p;
        }
        void setDetail(string m, string manu, int p){
            model=m;
            manufacturer=manu;
            price=p;
        }
        void getDetails(){
            cout<<model<<endl;
            cout<<manufacturer<<endl;
            cout<<price<<endl;
        }
};


int main(){
    Car mycar("null", "null", 0.0);
    mycar.setDetail("maruti", "india", 2500);
    mycar.getDetails();
    
    
    return 0;
}
