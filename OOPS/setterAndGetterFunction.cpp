# include <bits/stdc++.h>
using namespace std;
 
class Player{
    private:
        string name;
        int score;
        int health;


    public:
    // Setter Functions
        void setName(string name){
            this->name = name;
        }
        void setScore(int score){
            this->score = score;
        }
        void setHealth(int health){
            this->health= health;
        }


    // Getter Function
        void showHealth(){
            cout<<"The current health of player is "<<health<<'\n';
        }

        void showName(){
            cout<<"The name of the person is "<<name<<'\n';
        }

        void showScore(){
             cout<<"The current score of player is "<<score<<'\n';
        }

        // Function in C++ can not be only overloaded by changing return type of function

        
        // int  showHealth(){
        //     cout<<"The current health of player is "<<'\n';
        //     return health;
        // }

        // void showName(){
        //     cout<<"The name of the person is "<<name<<'\n';
        // }

        // void showScore(){
        //      cout<<"The current score of player is "<<score<<'\n';
        // }
};
 
void awadh_solution(){

    cout<<"Player 1\n";

    Player p1;// p1 ek Object hai 
    p1.showHealth();



    cout<<"\n\n";
    cout<<"Player 2\n";



    Player p2;// p2 ek Object hai 
   
    p2.showHealth();

   
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}