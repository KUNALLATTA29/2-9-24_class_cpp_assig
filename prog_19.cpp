#include<bits/stdc++.h>
using namespace std;

class Bus{
    private:
        string busname;
        string route;
        string drivername;
    public:
        void set(string bus, string rou, string dri){
            busname=bus;
            route=rou;
            drivername=dri;
        }
        
        void get(){
            cout<<busname<<" "<<route<<" "<<drivername;
        }
};


int main(){
    Bus obj;
    obj.set("tata", "mdk", "ashok");
    obj.get();
    return 0;
}
