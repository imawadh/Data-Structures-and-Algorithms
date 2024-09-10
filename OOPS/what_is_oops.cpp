# include <iostream>
# include <string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
        
    // methods / Member function
    void changedept(string newdept)
    {
        dept = newdept;
    }
    // Setter Function ---> Function to set private values
    void setsalary(double s)
    {
        salary = s;
    }
    // Getter Function ----> Function to get private Values 
    double getsalary()
    {
        return salary;
    }
    // We use getter and setter function to set the private member of the class while object creation 

};
int main()
{
    
    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;
    t1.name="Sachin";
    t1.dept = "Sport";
    t1.subject="Cricket";
    // t1.salary=100,00;
    t1.setsalary(10000);
    t2.name = "Yadav Sir";
    cout<<t2.name<<'\n';
    cout<<t1.getsalary()<<'\n';







}
