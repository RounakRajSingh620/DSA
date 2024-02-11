#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> maxi;
    // mini heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(0);
    maxi.push(5);
    maxi.push(3);
    cout << "size-->" << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(8);
    mini.push(6);
    mini.push(8);
    mini.push(2);
    cout << "size-->" << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}