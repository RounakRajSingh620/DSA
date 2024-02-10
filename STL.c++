#include <iostream>
#include <vector>
using namespace std;
int main()
/*
 capacity--> kitni memories ko assign hui padi hai
 size--> kitne elements iss vector me pade hue hai
*/
{
    // Initialize of vector
    vector<int> v;
    // other method of initializing
    vector<int> a(5, 1);
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

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

    // poping out the element from vector array
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // clearing the size
    cout << "Before clear size" << v.size() << endl;
    v.clear();
    cout << "After clear size" << v.size() << endl;
}