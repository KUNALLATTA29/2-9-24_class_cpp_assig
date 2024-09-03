#include<bits/stdc++.h>
using namespace std;

class Patient{
    private:
        int patientid;
        string name;
        string diagnosis;
    public:
        void set(int id, string na, string dia){
            patientid=id;
            name=na;
            diagnosis=dia;
        }
        
        void get(){
            cout<<patientid<<" "<<name<<" "<<diagnosis;
        }
};


int main(){
    Patient obj;
    obj.set(123,"lalu","fever" );
    obj.get();
    return 0;
}
