#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    void print()
    {
        cout << level << endl;
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
