# include <bits/stdc++.h>
using namespace std;
 
class Player{
    public:
        string name;
        int score;
        int health;

        void showHealth(){
            cout<<"The current health of person is "<<health<<'\n';
        }

};
 
void awadh_solution(){

    cout<<"Player 1\n";

    Player p1;// p1 ek Object hai 
    p1.name="Awadh";
    p1.score = 76;
    p1.health=90;
    cout<<"Name = "<<p1.name<<'\n';
    cout<<"Score = "<<p1.score<<'\n';
    // cout<<"Health = "<<p1.health<<'\n';
    p1.showHealth();

    cout<<"\n\n";
    cout<<"Player 2\n";

    Player p2;// p2 ek Object hai 
    p2.name="Kishor";
    p2.score = 23;
    p1.health=45;
    cout<<"Name = "<<p2.name<<'\n';
    cout<<"Score = "<<p2.score<<'\n';
    // cout<<"Health = "<<p2.health<<'\n';
    p2.showHealth();

    // Always try to keep data members private and methods as public 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}