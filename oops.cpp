#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    int level;
};

int main()
{
    Hero h1;
    h1.health = 100;
    h1.level = 1;
    cout << "h1 health: " << h1.health << endl;
    cout << "h1 level: " << h1.level << endl;
    cout << "size " << sizeof(h1) << endl;
    return 0;
}
