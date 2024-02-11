#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push("love");
    q.push("kumar");
    q.push("babbar");
    cout << "first Element-> " << q.front() << endl;
    q.pop();
    cout << "first Element-> " << q.front() << endl;
    cout << "size Of stack->" << q.size() << endl;
    cout << "empty or not->" << q.empty() << endl;}