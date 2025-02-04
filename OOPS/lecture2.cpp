# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;

class Player{

    private:
        string name;
        int score;
        int health;


    public:
    // Setter Functions
        void setName(string name){
            Player::name = name;// Using Scope Resolution Operator 
        }
        void setScore(int score){
            this->score = score;// Using this keyword
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
};
 
void awadh_solution(){


 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}