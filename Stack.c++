#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("love");
    s.push("kumar");
    s.push("babbar");
    cout << "Top Element-> " << s.top() << endl;
    s.pop();
    cout << "Top Element-> " << s.top() << endl;
    cout << "size Of stack->" << s.size() << endl;
    cout << "empty or not->" << s.empty() << endl;
}