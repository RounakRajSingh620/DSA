#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Initialize of vector
    vector<int> v;
    // print the vector capacity
    cout << "Capacity-> " << v.capacity() << endl;
    // add the element
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;
    // printing elemet at index 2
    cout << "Elements at 2nd Index " << v.at(2) << endl;
}