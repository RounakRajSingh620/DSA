#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **q = &p;

    cout << "printing p : " << p << endl;
    cout << "printing p : " << &p << endl;

    cout << " i : " << i << endl;
    cout << *q << endl;
    cout << **q << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *q << endl;

    cout << &p << endl;
    cout << q << endl;

    return 0;
}