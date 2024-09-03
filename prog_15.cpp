#include<bits/stdc++.h>
using namespace std;

class Restaurant{
    private:
        string restaurantname;
        string cuisinetype;
        int rating;
    public:
        Restaurant(string res, string cui, int rat){
            restaurantname=res;
            cuisinetype=cui;
            rating=rat;
        }
        
        void display(){
            cout<<restaurantname<<" "<<cuisinetype<<" "<<rating;
        }
};


int main(){
    Restaurant obj("gapshap", "indian", 9);
    obj.display();
    return 0;
}
