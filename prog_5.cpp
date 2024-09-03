#include<bits/stdc++.h>
using namespace std;

class Laptop{
    private:
        string brand;
        string processor;
        int ram;
    public:
        Laptop(): brand("null"), processor("null"), ram(0){}
        
        Laptop(string b, string p, int r){
            brand=b;
            processor=p;
            ram=r;
        }
        
        void display(){
            cout<<brand<<endl;
            cout<<processor<<endl;
            cout<<ram<<endl;
        }
        
};


int main(){
    Laptop obj("hp", "intel", 16);
    obj.display();
    return 0;
}
