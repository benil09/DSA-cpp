#include <iostream>
using namespace std;

// declared a class
class Hero
{
    // Properties
private:
    int health;
    int level;

public:
    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }
    int setHealth(int h, int pass)
    {
        if (pass == 123)
        {
            health = h;
            return health;
        }
        return -1;
    }
    void setLevel(int l)
    {
        level = l;
    }
};

int main()
{
    Hero magnus;

    magnus.setHealth(101, 123);
    magnus.setHealth(100, 1233);
    magnus.setLevel(20);
    cout << "Health: " << magnus.getHealth() << endl;
    cout << "Level: " << magnus.getLevel() << endl;

    Hero a;
    cout << "Health: " << a.getHealth() << endl;
    cout << "Level: " << a.getLevel() << endl;

    Hero *b = new Hero;
    b->setHealth(12, 123);
    b->setLevel(25);
    cout << "Health: " << (*b).getHealth() << endl;
    cout << "Level: " << b->getLevel() << endl;

    // cout << sizeof(h1) << endl; // 8 bytes (4 bytes for health and 4 bytes for level)

    return 0;
}