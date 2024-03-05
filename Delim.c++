#include <iostream>
using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char name[MAX_LENGTH];

    cout << "Enter your name: ";
    cin.getline(name, MAX_LENGTH);

    cout << "Hello, " << name << "!" << endl;

    return 0;
}
