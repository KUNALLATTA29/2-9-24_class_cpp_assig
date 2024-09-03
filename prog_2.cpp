#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
        int employeeid;
        string name;
        string department;
    public:
        Employee(int e, string n, string d){
            employeeid=e;
            name=n;
            department=d;
        }
        void displayDetails(){
            cout<<employeeid<<endl;
            cout<<name<<endl;
            cout<<department<<endl;
        }
};


int main(){
    Employee obj(1,"kunal","cse");
    obj.displayDetails();
    
    
    return 0;
}
