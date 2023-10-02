#include<bits/stdc++.h>

using namespace std;
//Q.Output sum of each subarray of the given array ##
// int main () {

//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0; i<n; i++) {
//        sum =0;
//         for(int j=i; j<n; j++) {
//            sum+= arr[j];
//             cout<<sum<<endl;
//         }
//     }
   
// }
//Q.Given an array a[] of size n . For every i from 0 to n-1 output max(a[o],a[1],.....,a[i]).

// int main() {

//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
     
//      int mx = -1999;
//      for(int i=0; i<n; i++) {
//         mx= max(mx, arr[i]);

      

//      }
//      cout<< mx <<endl;
// }



//Q. An arithmetic array is an array that contains at least two integers and the difference between consicutive integers are equal.
//for example ,[9,10],[3,3,3] and[9,7,5,3] are arithmatic arrays.

//sarasvati has an array of N non-negative integers.the i-th integer of the array is A(i). She wants to choose a contiguous arithmatic
//subarray from her array that has the maximum length.
//HELP HER.

// int main() {

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++) {

//         cin>>arr[i];
//     }

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j= 2;
//     int curr =2;

//     while(j<n) {

//         if(pd == arr[j]-arr[j-1]) {
//             curr++;
//         } else {
//            pd = arr[j]-arr[j-1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     cout<<ans<<endl;
    
// }
//Q. 2|
// int main() {

//     int n;
//     cin>>n;
//     int a[n+1];
//     a[n] = -1;

//     for(int i=0; i<n; i++) {
//         cin>>a[i];
//     }
//     if(n == 1) 
//     {
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;

//     for(int i=0 ; i<n; i++)
//     {
//         if(a[i]>mx && a[i]>a[i+1])
//         {
//             ans++;
//             mx=max(a[i],ans);
//         }
//     }
//     cout<<ans<<endl;

    
// } 

//Q. Given an array arr[] of size N. The task is to find the first repeating element in the array of integers ,an element that occurs
//more than once and whose index of first occurrence is smallest.

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>n;
//     }
//     const int N = 1e6+2;
//      int idx[N] ;
//     for(int i=0; i<n; i++)
//     {
//         idx[i]= -1;
//     }
//     int minidx = INT_MAX;
    
//     for(int i=0; i<n ; i++)
//     {
//         if(idx[a[i]] != -1)
//         {
//             minidx = min(minidx,a[i]);
//         }
//         else
//         {
//             idx[a[i]] = i;
//         }
//     }
//     if (minidx == INT_MAX)
//     {
//         cout<<"-1"<<endl;
//     }
//     else
//     {
//         cout<<minidx + 1 <<endl;
//     }

// }     