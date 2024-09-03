#include<bits/stdc++.h>
using namespace std;

class School{
    private:
        string schoolname;
        string location;
        int studentCount;
    public:
        
        void set(string n, string l, int c){
            schoolname=n;
            location=l;
            studentCount=c;
        }
        
        void get(){
            cout<<schoolname<<endl;
            cout<<location<<endl;
            cout<<studentCount<<endl;
        }
        
};


int main(){
    School obj;
    obj.set("kunal", "bikaner", 240);
    obj.get();
    return 0;
}
