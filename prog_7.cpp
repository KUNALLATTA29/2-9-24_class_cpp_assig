#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
    public:
        
        Person(string n, int a, string add){
            name=n;
            age=a;
            address=add;
        }
        
        void displayInfo(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<address<<endl;
        }
        
};


int main(){
    Person obj("kunal",24,"bikaner");
    obj.displayInfo();
    return 0;
}
