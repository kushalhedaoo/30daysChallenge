#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // string str="programming";
    // string str = "racecar";
    string str = "raccar";

    int n = str.size();
    unordered_map<char, int> map;
    bool flag = false;
    char ans;
    for (int i = 0; i < n; i++)
        map[str[i]]++;
    for (int i = 0; i < n; i++)
    {
        if (map[str[i]] == 1 and map[str[i]])
        {
            ans = str[i];
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<ans;
    else cout<<-1;

    return 0;
}