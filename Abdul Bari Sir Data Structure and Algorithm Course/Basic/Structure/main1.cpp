# include <iostream>
struct rectangle
{
    int length;
    int breadth;
};
//The above code will not occupy any space in the memory until and unless it is being used in the main program 

using namespace std;
int main()
{
    struct rectangle rect1={10,10};

    struct rectangle rect2;
    // Here rect1 and rect2 is going to occupy the space in the main memory of the amount of space ocupied by all the internal value to be initialised as per the data type of it 
     
    rect2.length=90;
    rect2.breadth=90;
    cout<<"Area of Rect1 = "<<rect1.length*rect1.breadth<<'\n'<<"Perimeter of Rect2 = "<<2*(rect2.length + rect2.breadth);
    
    
    
    
}