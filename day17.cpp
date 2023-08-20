#include<iostream>
using namespace std;

bool fibonnaci(int a){
    if(a==0 or a==1)return true;
    int a1=0,a2=1,c=0;
    while(true){
        c=a1+a2;
        a1=a2;
        a2=c;
        if(c==a)return true;
        else if(c>a)
            break;
    }
    return false;
}

int main()
{
    if(fibonnaci(987))cout<<"True";
    else cout<<"False";
    return 0;
}