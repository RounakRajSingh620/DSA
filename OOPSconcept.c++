#include <iostream>
using namespace std;

// Encapsulation is the process of restricting access to certain parts of an object
// class Student{
//     private:
//     string name;
//     int age;
//     int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };

// INHERITANCE- It is the mechanism in which one class acquires the property of another class
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setweight(int w)
    {
         this->weight=w;
    }
};

class Male : public Human
{
public:
    string color;
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main()
{
    // inheritance
    Male obj1;
    cout<<obj1.getAge()<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;

    // ENCAPSULATION
    // Student s1;
    // cout<<s1.getAge();

    return 0;
}
