# include <bits/stdc++.h>
using namespace std;
class fruit{
public: // Access Modifier  bydefault it is private 
    string name;
    string color;
};
int main(){

    // When we have declear an object without new keyword we can do it and we have make use of .operator to acess its properties....
    
    fruit apple;
    apple.name = "Apple";
    apple.color="Red";

    // When we use new keyword we get an object pointer 

    fruit *mango = new fruit();

    // Since mango is a object pointer so we can not dot operator with it, we need to use arrow operator here....

    mango->name="Mango";
    mango->color="Yellow";



    // Constructor 
    
}