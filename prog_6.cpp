#include<bits/stdc++.h>
using namespace std;

class Hotel{
    private:
        string name;
        string location;
        int rating;
    public:
        
        void set(string n, string l, int r){
            name=n;
            location=l;
            rating=r;
        }
        
        void get(){
            cout<<name<<endl;
            cout<<location<<endl;
            cout<<rating<<endl;
        }
        
};


int main(){
    Hotel obj;
    obj.set("kunal","bikaner",9);
    obj.get();
    return 0;
}
