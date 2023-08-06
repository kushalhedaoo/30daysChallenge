#include<iostream>
#include<algorithm>
using namespace std;

void solve(int arr[],int n){
    sort(arr,arr+n);
    cout<<arr[0]<<" " <<arr[n-1];
}

int main()
{
    int arr[]={5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr,n);
    return 0;
}