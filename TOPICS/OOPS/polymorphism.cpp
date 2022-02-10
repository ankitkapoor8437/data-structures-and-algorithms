#include<iostream>
using namespace std;


class A{
    public:
    void sayhello(){
        cout<< " hwllo ankit kapoor"<< endl;
    }

    int sayhello(string name, int n){
        cout<< " hwllo " << name << endl;
        return n;
    }


    void sayhello(string name){
        cout<< " hwllo " << name << endl;
    }

 
};


class B{

    public:
    int a;
    int b;

    public:
    int add()
    {
        a+b;
    }

    void operator+ (B &obj)
    {
        int value1 = this-> a;
        int value2 = obj.a;
        cout << "output:- " << value2-value1<< endl; 
    }

};


class Animal
{
    public:
    void speak(){
        cout<< "speaking"<<endl;
    }
};

class Dog: public Animal{

    public:
    void speak()
    {
        cout<< "barking";
    }
};

int main()
{
    // A obj;
    // obj.sayhello();

    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;

    Dog obj;

    obj.speak();

    return 0;
}
