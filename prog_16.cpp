#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
        string name;
        string designation;
        int salary;
    public:
        Employee(string name, string designation, int salary){
            this->name=name;
            this->designation=designation;
            this->salary=salary;
        }
        
        void bonus(int n){
            int k = (n/100.0)*salary;
            cout<<salary+k;
        }
};


int main(){
    Employee obj("kunal","sde", 1000);
    obj.bonus(10);
    return 0;
}
