#include<bits/stdc++.h>
using namespace std;

class FootballTeam{
    private:
        string teamname;
        string coach;
        int numberofplayers;
    public:
        void set(string name, string co, int num){
            teamname=name;
            coach=co;
            numberofplayers=num;
        }
        
        void get(){
            cout<<teamname<<" "<<coach<<" "<<numberofplayers;
        }
};


int main(){
    FootballTeam obj;
    obj.set("goligos","mr.suman",12);
    obj.get();
    return 0;
}
