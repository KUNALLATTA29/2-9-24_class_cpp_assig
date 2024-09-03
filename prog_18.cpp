#include<bits/stdc++.h>
using namespace std;

class Musician{
    private:
        string name;
        string instrument;
        string genre;
    public:
        void set(string na, string ins, string gen){
            name=na;
            instrument=ins;
            genre=gen;
        }
        
        void get(){
            cout<<name<<" "<<instrument<<" "<<genre;
        }
};


int main(){
    Musician obj;
    obj.set("rk", "dhol", "classic");
    obj.get();
    return 0;
}
