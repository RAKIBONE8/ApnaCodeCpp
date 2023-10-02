#include<iostream>
#include<cmath>
using namespace std;
// Q. write a program to check if a number prime or not.
/*
int main() {

    int n;
    cin>>n;
    
    bool flag = 0;
   
    for(int i=2; i<=sqrt(n); i++ ) {
        if(n%i == 0) {
            cout<<" this is not prime"<<endl;
           flag = 1;
            break;
        } 
    } 
    if(flag == 0)
    {
        cout<<"this is a prime number"<<endl;
    }
    
}
*/

//Q. write a program to print all the digits of a positive decimal number for right to left.

/*
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
*/

//Q. write a program to reverse a number.

/*               
int main() {

    int n; 
    cin>>n;

    int reverse = 0;

    while(n>0) {

      int lastDigit = n%10; 
       reverse = reverse*10 + lastDigit;
       n/=10;      
    }
    cout<<reverse<<endl;

}
*/

//Q. write a code to check if a number is Amstrong number.

/*
int main () {

    int n;
    cin>>n;

   int sum = 0;
   int originaln = n;

    while(n>0) {
      int lastDigit = n%10;
        sum += pow(lastDigit,3);
        n/=10;
    }
       if(sum == original) {
        cout<<"Amstrong number"<<endl;
    } else {
        cout<<"not a Amstrong number"<<endl;
    }
    return 0;

}
*/