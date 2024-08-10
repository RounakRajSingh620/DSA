#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello from A" << endl;
    }
    // function overloading
    int sayHello(char name)
    {
        cout << "Hello from A" << endl;
        return 1;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << " from A" << endl;
    }
};
// operator overloading

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }
};

// function/method overriding
class Animal
{
public:
    void speak()
    {
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog is speaking" << endl;
    }
};

int main()
{
    Dog obj4;
    obj4.speak();
    Animal obj5;
    obj5.speak();

    

    A obj;
    obj.sayHello();

    B obj1, obj2;
    obj1.a = 10;
    obj2.a = 20;
    obj1 + obj2;

    return 0;
}