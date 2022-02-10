#include<iostream>
using namespace std;

class Hero {

    // properties
    // char name[100];
    private:
    int health = 70;
    public:
    char level;

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;

    }

    Hero(){
        cout<<"contructor called"<<endl;
    }
    Hero(int health)
    {   
        cout<< this<<endl;
        this->health = health;
    }

};



int main()
{

    Hero ramesh(10);
    cout<< &ramesh;

    // // static allocation
    // Hero a;

    // // dynamic allocation
    // Hero *h = new Hero;
    // cout <<sizeof(h);


    // // creation of object
    // Hero ramesh;

    // // ramesh.health = 80;
    // // ramesh.level = 'A';
    // cout<< ramesh.gethealth()<< endl;
    // ramesh.sethealth(90);
    // cout<< ramesh.gethealth()<< endl;
    // // cout<< ramesh.health<<endl;
    // cout<< ramesh.level<<endl;


    // cout<< sizeof(h1)<<endl;


    return 0;
}
