#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    m.insert({5, "Bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}