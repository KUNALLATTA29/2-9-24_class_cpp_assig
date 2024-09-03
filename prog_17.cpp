#include<bits/stdc++.h>
using namespace std;

class University{
    private:
        string universityname;
        string location;
        int numberofdepartment;
    public:
        void set(string name, string loc, int num){
            universityname=name;
            location=loc;
            numberofdepartment=num;
        }
        
        void get(){
            cout<<universityname<<" "<<location<<" "<<numberofdepartment;
        }
};


int main(){
    University obj;
    obj.set("cet","bikaner",12);
    obj.get();
    return 0;
}
