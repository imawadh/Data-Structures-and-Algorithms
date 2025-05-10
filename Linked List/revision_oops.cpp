# include <iostream>
using namespace std;

class Student{ // user defined datatype
    public:
        string name;
        int roll_no;
        float marks;
        
        Student(string name, int roll_no, float marks){
            this->name = name;
            // or (*this).name = name;
            this->roll_no = roll_no;
            this->marks = marks;
        }
};
void change(Student &s){
    s.name = "Sita";
} // this is pass by reference 

// void change(Student s){
//     s.name = "Bharat";
// } // this is pass by value 

int main(){
    Student s1("Ram",78,90);

    // Student* s1 = new Student("Ram",78,90);
    // cout<<s1->name<<"  "<<s1->roll_no<<"  "<<s1->marks<<endl;
    // cout<<(*s1).name<<"  "<<(*s1).roll_no<<"  "<<(*s1).marks<<endl;
    s1.name = "RAM";
    s1.roll_no=14;
    s1.marks=46;
    Student *ptr = &s1; // ptr is a pointer which points to s1 student

    // Two different ways of using pointers using arrow with no dereference operator and using dot with dereference operator  
    // we need to dereference because of 
    //     Dereferencing a pointer means accessing the actual value stored at the    memory address the pointer holds. When you dereference a pointer (using *), you are telling the program:
    // "Don't use the address itself—go to that address and give me the data stored there."
    // Dereferencing using * and changing its value is same as using -> operator directly .... 

    (*ptr).name = "Singh"; 
    cout<<s1.name<<"  "<<s1.roll_no<<"  "<<s1.marks<<endl;
    ptr->name = "Sita";

    cout<<s1.name<<"  "<<s1.roll_no<<"  "<<s1.marks<<endl;
    change(s1);
    cout<<s1.name<<"  "<<s1.roll_no<<"  "<<s1.marks<<endl;


}