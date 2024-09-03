#include<bits/stdc++.h>
using namespace std;

class Doctor{
    private:
        int doctorid;
        string specialization;
        int experiance;
    public:
        void set(int id, string spe, int ex){
            doctorid=id;
            specialization=spe;
            experiance=ex;
        }
        
        void get(){
            cout<<doctorid<<" "<<specialization<<" "<<experiance;
        }
};


int main(){
    Doctor obj;
    obj.set(123,"surgen", 13 );
    obj.get();
    return 0;
}
