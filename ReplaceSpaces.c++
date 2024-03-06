#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(string &str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string exampleString = "Hello World! This is a test string.";
    cout << "Original string: " << exampleString << endl;
    cout << endl;
    string modifiedString = replaceSpaces(exampleString);
    cout << "Modified string: " << modifiedString << endl;
    return 0;
}
