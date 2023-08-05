// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
// With optimal approach we have used map 
// _TC: O(n) SC:O(N)


#include <iostream>
#include <unordered_map>
using namespace std;

int count_pairs_with_givenSum(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int count_pairs = 0;
    for (int i = 0; i < n; i++)
    {
        int val = k - arr[i];
        if (map[val])
            count_pairs += map[val];

        map[arr[i]]++;
    }
    return count_pairs;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int K = 6;
    // Expected Output: 2
    // Test Case 2:
    // Input:
    // int arr[]={3, 1, 4, 2, 5};
    // K = 5;
    // Expected Output: 2

    // Test Case 3:
    // int arr[] = {2, 2, 2, 2, 2};
    // K = 4;
    // Expected Output: 4

    // Test Case 5:
    // int arr[]= {1, 3, 5, 7, 9};
    // K = 10;
    // Expected Output: 2
    // Test Case 6:
    // int arr[]={0, 0, 0, 0, 0};
    // K = 0;
    // Expected Output: 10

    // Test Case 7:
    // int arr[]={ 5, 10, 15, 20};
    // K = 25;
    // Expected Output: 2

    // Test Case 8:
    // int arr[]={1, 2, 3, 4, 5};
    // K = 9;
    // Expected Output: 1

    // Test Case 9:
    // int arr[]={9, 4, 6, 3, 2, 1};
    // K = 10;
    // Expected Output: 2

    // Test Case 10:
    int arr[] = {5, 15, 20, 25, 30};
    K = 35;
    // Expected Output: 2
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << count_pairs_with_givenSum(arr, n, K);

    return 0;
}
