# include <bits/stdc++.h>
using namespace std;
class Teacher{
    public:
        Teacher(){
            cout<<"Hello I am a CS  Taecher.\n";
            dept = "Computer Science";// auto initialised
        }
        string name;
    
        string dept;
};
int main(){
    Teacher t1;
    cout<<t1.dept;
}