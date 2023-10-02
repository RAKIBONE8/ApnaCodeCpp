#include<iostream>
using namespace std;

//Q. check a number that is a power of 2 or not ##

// bool powerOf2(int n)
// {
//     if((n && n & (n-1)) == 0)
//     {
//         return 0;
//     }
// }

// int main ()
// {

//     cout<<powerOf2(8)<<endl; 

//     if(powerOf2 == 0)
//     {
//         cout<<"its a number that is power of 2"<<endl;
//     }
//     else
//     {
//         cout<<"this number is not power of 2"<<endl;
//     }
// }

//   //Q.write a prgm to count the number of ones in binary representation of a number ##

// int numberOfones(int n)
// {
//     int count = 0;
//     while(n>0)
//     {
//         n = n & (n-1);
//         count++;
//     }
//     return count;
// }

// int main ()
// {
//    cout<< numberOfones(19) <<endl;
// }

//Q. write a prgm to generate all possible subsets of a set ##

// void subsets(int arr[], int n)
// {
//     for(int i=0; i<(1<<n); i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             if(i & (1<<j))
//             {
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }

// int main ()
// {
//    int arr[5] = {1,2,3,4,5};

//    subsets(arr,5);
// }

// Q. write a prgm to find a unique number in an array where all the numbers are present twise except one ##

// int unique(int arr[],int n)
// {
//     int xorsum = 0;
//     for(int i=0; i<n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }

// int main ()
// {
//    int arr[] = {1,2,3,1,2,3,4};
   
//    cout<<unique(arr,7)<<endl;
// }

//Q. when 2 numbers are unique ##

// int setBit(int n, int pos)
// {
//     return(( n & (1<<pos) )!= 0);
// }

// void unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for(int i=0; i<n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }

// int tempxor = xorsum ;
// int setbit = 0;
// int pos = 0;
// while (setbit != 1)
// {
//     setbit = xorsum & 1;
//     pos++;
//     xorsum = xorsum >> 1;
// }

// int newXor = 0;
// for(int i=0; i<n; i++)
// {
//     if(setBit(arr[i],pos - 1))
//     {
//         newXor = newXor ^ arr[i];
//     }
// }

// cout<<newXor<<endl;
// cout<< (tempxor^newXor)<< endl;

// }

// int main ()
// {
// int arr[] = {1,2,3,1,2,3,5,7};

// unique(arr,8);

// }

//Q.Write a prgm to find a unique number in an array where all numbers except one,are present thrice ##

bool getBit(int n, int pos)
{
    return ( (n & (1<<pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos));
}
int result = 0;
void unique(int arr[], int n)
{
    for(int i=0; i<64; i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            result = setBit(result,i);
        }
    }
   cout << result <<endl;
}

int main ()
{
   int arr[]={1,2,3,1,2,3,1,2,3,4};

   unique(arr,10);
}