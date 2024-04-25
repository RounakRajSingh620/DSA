#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **q = &p;

    cout << " i : " << i << endl;

    cout << "printing p : " << p << endl;
    cout << "printing p : " << &p << endl;

    cout << *q << endl;

    cout << **q << endl;

    return 0;
}