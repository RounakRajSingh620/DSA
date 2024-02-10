#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout << "Print first element Index --> " << d.at(1) << endl;
    cout<<"Size of deque"<<d.size()<<endl;

}