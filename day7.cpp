#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int arr[],int n,int N){
    if (n==1 or N>n)return ;
    reverse(arr,arr+n);
    reverse(arr,arr+(n-N));
    reverse(arr+(n-N),arr+(n));

}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}
int main()
{
    // int arr[]={1,2,3,4,5};
    int N=2;
// 54321
// 34512
// Test Case 2:
// int arr[]={10, 20, 30, 40, 50};
// N = 3;
// Expected Output: [40, 50, 10, 20, 30]

// Test Case 3:
// int arr[]={3, 6, 9, 12, 15};
// N = 4;
// Expected Output: [15, 3, 6, 9, 12]


// Test Case 4:
// int arr[]={5, 10, 15, 20, 25, 30};
// N = 1;
// Expected Output: [10, 15, 20, 25, 30, 5]

// Test Case 5:
int arr[]={1, 2, 3, 4, 5, 6, 7};
N = 7;
// Expected Output: [1, 2, 3, 4, 5, 6, 7] (Same array after 7 rotations)

// Test Case 6:
// int ar/r[]={8, 6, 4, 2, 0};
// N = 5;
// Expected Output: [8, 6, 4, 2, 0] (Same array after 5 rotations)

// Test Case 7:
// int arr[]={1, 3, 5, 7, 9};
// N = 0;
// Expected Output: [1, 3, 5, 7, 9] (No rotation, same array)

// Test Case 8:
// int arr[]={1, 2, 3, 4, 5, 6};
// N = 6;
// Expected Output: [1, 2, 3, 4, 5, 6] (Same array after 6 rotations)

// Test Case 9:
// int arr[]={2, 4, 6, 8};
// N = 1;
// Expected Output: [4, 6, 8, 2]

// Test Case 10:
// int arr[]={7, 5, 3,1};
// N = 3;
// Expected Output: [1, 7, 5, 3]
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n,N);
    display(arr,n);
    return 0;
}



