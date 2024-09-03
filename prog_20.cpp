#include<bits/stdc++.h>
using namespace std;

class Concert{
    private:
        string artistname;
        string venue;
        string date;
    public:
        void set(string na, string ven, string da){
            artistname=na;
            venue=ven;
            date=da;
        }
        
        void get(){
            cout<<artistname<<" "<<venue<<" "<<date;
        }
};


int main(){
    Concert obj;
    obj.set("gulson","rk vatika", "12 feb");
    obj.get();
    return 0;
}
