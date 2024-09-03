#include<bits/stdc++.h>
using namespace std;

class Train{
    private:
        int trainnumber;
        string route;
        int departuretime;
    public:
        void set(int name, string r, int dep){
            trainnumber=name;
            route=r;
            departuretime=dep;
        }
        
        void get(){
            cout<<trainnumber<<" "<<route<<" "<<departuretime;
        }
};


int main(){
    Train obj;
    obj.set(1234, "bikaner to jaipur", 6);
    obj.get();
    return 0;
}
