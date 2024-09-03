#include<bits/stdc++.h>
using namespace std;

class Magazine{
    private:
        string title;
        string editor;
        string publicationdate;
    public:
        Magazine(string t, string ed, string pub){
            title=t;
            editor=ed;
            publicationdate=pub;
        }
        
        void get(){
            cout<<title<<" "<<editor<<" "<<publicationdate;
        }
};


int main(){
    Magazine obj("rich dad","billy", "babu publication");
    obj.get();
    return 0;
}
