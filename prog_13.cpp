#include<bits/stdc++.h>
using namespace std;

class Library{
    private:
        string libraryname;
        string location;
        int numberofbooks;
    public:
        void set(string t, string d, int r){
            libraryname=t;
            location=d;
            numberofbooks=r;
        }
        void get(){
            cout<<libraryname<<" "<<location<<" "<<numberofbooks;
        }
};


int main(){
    Library obj;
    obj.set("bagal","bikaner",154);
    obj.get();
    return 0;
}
