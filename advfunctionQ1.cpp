#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
     int sum=0;
     for(int i=1; i<=n; i++) {
        sum+=i;
     }
     return sum;
}



bool check(int x, int y, int z) {
    
       int a = max(x,max(y,z));
       int b,c;

       if(a == x) {
         b = y;
         c = z;
       } else if(a == y) {
         b = x;
         c = z;
         
       } else {
        b = x;
        c = y;
       }
       if(a*a == b*b + c*c) {
        return true;
       } else {
        return false;
       }
}


int binaryTodecimal(int n) {

    int ans = 0;
    int x = 1;
    while(n>0) {
        int y = n%10;
        ans+= x*y;
        x*= 2;
        n/=10;
    }
    return ans;
}


int octalTodecimal(int n) {

    int ans = 0;
    int x = 1;
    while(n>0) {
        int y = n%10;
        ans+= x*y;
        x*= 8;
        n/=10;
    }
    return ans;
}

int DecimaltoBinary(int n) {

    int x = 1;
    int ans = 0;

    while(x<=n) {
        x*=2;
    }
    x/=2;
    while(x>0) {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}
int DecimaltoOctal(int n) {

    int x = 1;
    int ans = 0;
    while(x<=n) {
        x*=8;
    }
    x/=8;
    while(x>0) {
        int lastDigit = n/x;
        n-= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit; 
        
    }
    return ans;
}
int reverse (int n) { 
    int ans = 0;
    while(n>0) {
        int lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n/=10;
    }
    return ans;
}
  int addBinary(int a , int b) {

    int ans = 0;
    int prevCarry = 0;

    while(a>0 && b>0) {

        if(a%2 == 0 && b%2 == 0) {
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        } else if((a%2 == 1 && b%2 == 0) || (a%2 == 0 && b%2 == 1)) {
            if(prevCarry == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            } else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        } else {
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /=10;
        b /=10;
    }
    while(a>0) {
        if(prevCarry == 1) {
            if(a%2 == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        } 
        else {
            ans = ans*10 + (a%2);
           
        }
        a/=10;
    }
     while(b>0) {
        if(prevCarry == 1) {
            if(b%2 == 1) {
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else {
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        } 
        else {
            ans = ans*10 + (b%2);
           
        }
        b/=10;
        
  }
  if(prevCarry == 1) {
    ans = ans*10 + 1 ;

  }
   ans = reverse(ans);
   return ans;
   
  }
int main () {

    int a, b ;
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
}

// int main ()
// {
//     int n;
//     cin>>n;
//     cout<<DecimaltoBinary(n)<<endl;
// }