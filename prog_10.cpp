#include<bits/stdc++.h>
using namespace std;

class Flight{
    private:
        int flightnumber;
        string destination;
        int departuretime;
    public:
        void set(int n, string d, int dep){
            flightnumber=n;
            destination=d;
            departuretime=dep;
        }
        void get(){
            cout<<flightnumber<<" "<<destination<<" "<<departuretime;
        }
};


int main(){
    Flight obj;
    obj.set(123,"bikaner",12);
    obj.get();
    return 0;
}
