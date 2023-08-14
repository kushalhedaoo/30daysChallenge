#include<iostream>
#include<stack>
using namespace std;

string reverse_word_by_word(string s){
    stack<string>st;
    string temp="";
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(ch==' '){
        if(temp!="")
            st.push(temp);
        temp="";
        }
        else{
            temp+=ch;
        }
    }
    if(temp!="")st.push(temp);
    string ans="";
    while(!st.empty()){
        ans+=(st.top()+" ");
        st.pop();
    }
    ans.pop_back();

    return ans;
}

int main()
{
    // string s="the sky is blue";
    // string s="  hello world  ";
    string s="a good   example";
    cout<<reverse_word_by_word(s);
    return 0;
}