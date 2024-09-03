#include<bits/stdc++.h>
using namespace std;

class Building{
    private:
        string buildingname;
        string location;
        int numberoffloors;
    public:
        Building(string name, string lo, int num){
            buildingname=name;
            location=lo;
            numberoffloors=num;
        }
        
        void get(){
            cout<<buildingname<<" "<<location<<" "<<numberoffloors;
        }
};


int main(){
    Building obj("rk_vatika", "bikaner", 24);
    obj.get();
    return 0;
}
