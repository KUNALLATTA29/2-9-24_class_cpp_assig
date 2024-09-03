#include<bits/stdc++.h>
using namespace std;

class Movie{
    private:
        string title;
        string director;
        int realseyear;
    public:
        void set(string t, string d, int r){
            title=t;
            director=d;
            realseyear=r;
        }
        void get(){
            cout<<title<<" "<<director<<" "<<realseyear;
        }
};


int main(){
    Movie obj;
    obj.set("babli","sunil",2002);
    obj.get();
    return 0;
}
