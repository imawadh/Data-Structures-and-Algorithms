# include <iostream>
struct card
{
    int face;
    char shape;
    char color;
};

using namespace std;
int main()
{
    
    
struct card deck[52]={{1,'D','R'}, {2,'S','B'}};// This is array of structure 
cout<<deck[1].color<<'\n';
cout<<deck[0].shape;




    
    
    
}