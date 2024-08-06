#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }
    // parameterized constructor
    Hero(int health)
    {
        cout << "this-> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    Hero(Hero &h)
    {
        cout << "Copy constructor called" << endl;
        this->health = h.health;
        this->level = h.level;
    }
    
    void print()
    {
        cout << "Health is: " << this->health << endl;
        cout << "Level is: " << this->level << endl;    
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
    int setHealth(int h)
    {
        health = h;
    }

    int setlevel(char l)
    {
        level = l;
    }
};

int main()
{
    // copy constructor
    Hero rai(40, 'Z');
    rai.print();

    Hero raja(rai);
    raja.print();



    // Hero raunak(20);
    // cout<<"address of raunak "<<&raunak<<endl;
    // raunak.getHealth();

    // Hero *raunak1 = new Hero();
    // raunak1->getHealth();
    // // raunak1->setHealth(30);
    // // raunak1->setlevel('A');
    // // raunak1->print();

    /*
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setlevel('A');
    cout << "Health is:  " << a.getHealth() << endl;
    cout << "level is: " << a.getLevel() << endl;

    // dynamic allocation
    Hero *b = new Hero();
    b->setHealth(90);
    b->setlevel('B');
    cout << "health is: " << (*b).getHealth() << endl;
    cout << "level is: " << (*b).getLevel() << endl;

    cout << "Health is:  " << b->getHealth() << endl;
    cout << "level is: " << b->getLevel() << endl;
    */

    // // create object of class Hero
    // Hero h1;

    // cout << h1.getHealth() << endl;

    // // setter
    // h1.setHealth(70);

    // // h1.health = 100;
    // h1.level = 1;

    // cout << "h1 health: " << h1.getHealth() << endl;
    // cout << "h1 level: " << h1.level << endl;
    // cout << "size " << sizeof(h1) << endl;
    return 0;
}
