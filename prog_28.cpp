#include<bits/stdc++.h>
using namespace std;

class Game{
    private:
        string gamename;
        string platform;
        int price;
    public:
        void set(string na, string pla, int pr){
            gamename=na;
            platform=pla;
            price=pr;
        }
        
        void get(){
            cout<<gamename<<" "<<platform<<" "<<price;
        }
};


int main(){
    Game obj;
    obj.set("palworld", "pc", 1200);
    obj.get();
    return 0;
}
