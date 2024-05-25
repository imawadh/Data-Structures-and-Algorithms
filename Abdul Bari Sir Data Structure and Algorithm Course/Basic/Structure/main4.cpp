# include <bits/stdc++.h>
using namespace std;
struct rect{
    int len;
    int bre;
};
struct cir{
    int rad;
};
struct student{
    
    string name;
    int age;
};
int main()
{
    rect rect1={10000,20};
    cout<<rect1.len<<'\n';
    cir rad1;
    rad1.rad=89;
    cout<<"Area = "<<22.7*rad1.rad*rad1.rad<<'\n';

    struct student data[89]={{"Awadh",78},{"Rohan",76}};
    // Counting starts with 0
    data[3]={"sfdg",87};
    cout<<data[1].age;
}