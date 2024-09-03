#include<bits/stdc++.h>
using namespace std;

class Gym{
    private:
        string gymname;
        string location;
        int membershipfee;
    public:
        void set(string na, string loc, int num){
            gymname=na;
            location=loc;
            membershipfee=num;
        }
        
        void get(){
            cout<<gymname<<" "<<location<<" "<<membershipfee;
        }
};


int main(){
    Gym obj;
    obj.set("rock_gym", "bikaner", 2500);
    obj.get();
    return 0;
}
