#include<iostream>
using namespace std;

void reverse(string str,int index ,int n)
{
    if(index==n)
    return;
    char temp=str[index];
    reverse(str,index+1,n);
    cout<<temp<<" ";
}

int main()
{
    char str[]="kushal";
    int n=sizeof(str)/sizeof(str[0]);
    reverse(str,0,n);


    return 0;
}