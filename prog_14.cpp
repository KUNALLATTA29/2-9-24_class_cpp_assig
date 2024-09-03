#include<bits/stdc++.h>
using namespace std;

class Course{
    private:
        int courseid;
        string coursename;
        int credits;
    public:
        Course(): courseid(0),coursename("null"),credits(0){}
        
        Course(int c, string coun, int cre){
            courseid=c;
            coursename=coun;
            credits=cre;
        }
};


int main(){
    Course obj(123, "java", 12);
    return 0;
}
