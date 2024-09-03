#include<bits/stdc++.h>
using namespace std;

class Book{
    private:
        string title;
        string author;
        string isbn;
    public:
        void setdetail(string t, string a, string i){
            title=t;
            author=a;
            isbn=i;
        }
        void displayDetails(){
            cout<<title<<endl;
            cout<<author<<endl;
            cout<<isbn<<endl;
        }
};


int main(){
    Book obj;
    obj.setdetail("beast","babu","zuzu");
    obj.displayDetails();
    
    
    return 0;
}
