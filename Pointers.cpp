#include<iostream>
using namespace std;

    // int a = 10 ;
    
    // int *aptr=&a;

    // cout<<*aptr<<endl;
    // *aptr=18;
    // cout<<*aptr<<endl;



    // int arr[] = {10,40,90};
    // cout<<*arr<<endl;

    // int *ptr=arr;
    // for(int i=0; i<3; i++)
    // {
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }  

    //swaping value by pointers;

void swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int main () 
{
    int a = 18;
    int b = 7;

    // int *aptr=&a;
    // int *bptr=&b;

    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}