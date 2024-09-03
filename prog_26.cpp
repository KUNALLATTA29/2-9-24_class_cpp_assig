#include<bits/stdc++.h>
using namespace std;

class Bike{
    private:
        string brand;
        string model;
        int engineCapacity;
    public:
        Bike(string br, string mo, int num){
            brand=br;
            model=mo;
            engineCapacity=num;
        }
        
        void get(){
            cout<<brand<<" "<<model<<" "<<engineCapacity;
        }
};


int main(){
    Bike obj("maruti", "brezza", 243);
    obj.get();
    return 0;
}
