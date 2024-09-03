#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
        string playername;
        int age;
        string teamname;
    public:
        Player(string p, int a, string t){
            playername=p;
            age=a;
            teamname=t;
        }
        void get(){
            cout<<playername<<" "<<age<<" "<<teamname;
        }
};


int main(){
    Player obj("kunal",24, "zozo");
    obj.get();
    return 0;
}
