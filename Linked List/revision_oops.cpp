# include <iostream>
using namespace std;
class Student{
    public:
        string name;
        int roll_no;
        float marks;
        Student(string name, int roll_no, float marks){
            this->name = name;
            this->roll_no = roll_no;
            this->marks = marks;
        }
};
int main(){
    Student s1("AWadh",78,90);
    s1.name = "Awadh";
    s1.roll_no=14;
    s1.marks=46;
    cout<<s1.name<<"  "<<s1.roll_no<<"  "<<s1.marks<<endl;


}