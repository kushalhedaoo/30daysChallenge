// Valid Parenthesis
#include <iostream>
#include <stack>
using namespace std;

void valid(string str, int n)
{
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '{' or str[i] == '(' or str[i] == '[')
            s.push(str[i]);
        else
        {
            if (s.empty())
            {
                cout << "false" << endl;
                return;
            }
            if ((str[i] == '}' and s.top() == '{') 
            or (str[i] == ')' and s.top() == '(') 
            or (str[i] == ']' and s.top() == '['))
                s.pop();
            else
            {
                cout << '"false"' << endl;
                return;
            }
        }
    }
    if (s.empty())
        cout << "true" << endl;
    else cout<<"false"<<endl;
    return;
}

int main()
{
    string str = "()()()";
    int n = sizeof(str) / sizeof(str[0]);
    valid(str, str.length());
    return 0;
}