# include <iostream>
using namespace std;
class Player{
    private:
        int health;
        int age;
        int score;
        bool alive;

    public:
        // Getter Function
        int get_health()
        {
            return health;
        };
        int get_age()
        {
            return age;
        };
        int get_score()
        {
            return score;
        };
        bool get_alive()
        {
            return alive;
        };

        // Setter Function
        void set_health(int health)
        {
            this->health=health;
        };
        void set_age(int age)
        {
            this->age=age;
        };
        void set_score(int score)
        {
            this->score=score;
        };
        void set_alive(bool alive)
        {
            this->alive=alive;
        };
};

// Parameterised method with otwo objects as parameter to it and returning a int type of value... 
int add_score(Player a,Player b)
{
    return a.get_score() + b.get_score();
}


// Parameterised method with otwo objects as parameter to it and returning a object ... 
Player check_score(Player a,Player b)
{
    if(a.get_score()>b.get_score()) return a;
    return b;
}

int main()
{
    Player harsh;
    Player raghav;

    harsh.set_age(45);
    harsh.set_alive(true);
    harsh.set_health(15);
    harsh.set_score(89);
    //Printing Harsh
    cout<<"Harsh Details :: \n";
    cout<<"Age :: " <<harsh.get_age()<<'\n';
    cout<<"Alive :: " <<harsh.get_alive()<<'\n';
    cout<<"Health :: " <<harsh.get_health()<<'\n';
    cout<<"Score :: "<<harsh.get_score()<<'\n'<<'\n'<<'\n';
    

    raghav.set_age(65);
    raghav.set_alive(false);
    raghav.set_health(78);
    raghav.set_score(34);
    
    //Printing Raghav
    cout<<"Raghav Details :: \n";
    cout<<"Age :: " <<raghav.get_age()<<'\n';
    cout<<"Alive :: " <<raghav.get_alive()<<'\n';
    cout<<"Health :: " <<raghav.get_health()<<'\n';
    cout<<"Score :: "<<raghav.get_score()<<'\n'<<'\n'<<'\n';

    cout<<"Printing the sum of score of Raghav and Harsh using int as return type of method "<<add_score(harsh,raghav)<<'\n'<<'\n'<<'\n';

    cout<<"Printing the maximum score of Raghav and Harsh using as player return type of method "<<check_score(harsh,raghav).get_score()<<'\n'<<'\n';



}