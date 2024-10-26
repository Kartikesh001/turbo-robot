// This algorithm helps to add two values to the element without using extra space
#include<bits/stdc++.h>
using namespace std;

// Dividend = Divisor * Quotient + Remainder;
// So when we divide dividend by Quotient later, we will obtain Divisor.
// So, we will first modify our arr[i] as
// arr[i]        = (arr[arr[i]]%n)*n  +    arr[i];

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        for(int i =0;i<n;i++){
            arr[i]=arr[i]+(arr[arr[i]]%n)*n;
            
            
        }
        for(int i =0;i<n;i++){
            arr[i]=arr[i]/n;
        }
        
        
    }
};


