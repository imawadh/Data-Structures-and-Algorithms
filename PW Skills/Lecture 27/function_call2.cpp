# include <iostream>
using namespace std;
// Call Stack during function call 0
void fun(){
    cout<<"Hello World !";
    fun();
}
int main()
{
    fun();
}