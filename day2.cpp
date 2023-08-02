// Q.Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
// Input:
// N = 7, X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4

// Approach 1: Brute force(TC: O(n) )
class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x)count++;
	    }
	    return count;
	}
};
// Approach 2: Binary Search(TC : O(log n))

class Solution{
public:	
	int count(int arr[], int n, int x) {
	    vector<int>v;
	    v.push_back(0);
	    v.push_back(-1);
	    int left=0,right=n-1;
	    int mid=(left+right)/2;
	
	
// 	LEFT OCCURANCE
	    while(left<=right){
	        mid=(left+right)/2;
	        if(arr[mid]==x){
	            v[0]=mid;
	            right=mid-1;
	        }
	       else if(arr[mid]>x){
	            right=mid-1;
	            
	        }
	        else{
	            left=mid+1;
	        }
	    }
	    
	    
	
// 	Right OCCURANCE
	    left=0,right=n-1;
	    while(left<=right){
	        mid=(left+right)/2;
	        if(arr[mid]==x){
	            v[1]=mid;
	            left=mid+1;
	        }
	        else if(arr[mid]>x){
	            right=mid-1;
	            
	        }
	        else{
	            left=mid+1;
	        }
	    }
	    return(v[1]-v[0]+1);
	}
};

