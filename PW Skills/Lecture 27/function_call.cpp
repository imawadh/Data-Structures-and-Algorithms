# include <iostream>
using namespace std;
void greet(){
    cout<<"Good Morning !\n";
    return ;
    cout<<"Good"; // Hum return likhe hai void function me phir bhi khatm ho jayega 
}
int product(int a, int b){
    greet();
    return a*b; // means khatm
    greet();
   
}
int main()
{
    cout<<product(4,6)<<'\n';
    greet();
    greet();
    int a = 90;
    int b  = 56;
    cout<<min(a,b)<<'\n';
    cout<<max(a,b)<<'\n';
    
    cout<<"A = "<<a<<'\n';
    cout<<"B = "<<b<<'\n';
    swap(a,b); // Inbuit Function Call 
    cout<<"A = "<<a<<'\n';
    cout<<"B = "<<b<<'\n';
    cout<<product(56,76);

}