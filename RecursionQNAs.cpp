#include<iostream>
using namespace std;

// int sum(int n)
// {   
//     if(n == 0)
//     {
//         return 0;
//     }
//     int prevSum = sum(n-1);

//     return n + prevSum;
// }

// int main ()
// {
//    int n;
//    cin>>n;
   
//    cout<<sum(n)<<endl;
   
// }

//Q. calculate n raised to power of p;

// int power(int n, int p)
// {   

//     if(p == 0)
//     {
//         return 1;
//     }
//     int prevPower = power(n, p-1);

//     return n * prevPower;
// }

// int main ()
// {
//    int n,p;
//    cin>>n>>p;

//    cout<<power(n,p)<<endl;
// }

//Q. find facotrial of a number  using recursion ;

// int Factorial(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     int prevFact = Factorial(n-1);
    
//     return n * prevFact;
    
// }

// int main ()
// {
//     int n; 
//     cin>>n;

//     cout<<Factorial(n)<<endl;
// }

//Q. Print the nth Fibonacci number ;

// int Fibonacci(int n)
// {   
//     if(n == 0 || n ==1)
//     {
//         return n;
//     }
//     int fibb = Fibonacci(n-1) + Fibonacci(n-2);

//     return fibb;
// }

// int main ()
// {
//     int n;
//     cin>>n;
//     cout<<Fibonacci(n)<<endl;
// }

//Q.check that an array is sorted or not by recursion;

// bool Sorted(int arr[], int n)
// {   
//     if(n == 1)
//     {
//         return 1;
//     }
//     bool restArray = Sorted(arr+1, n-1);
//     if(arr[0]<arr[1] && restArray)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main ()
// {  
  
//    int arr[] = {1,2,3,4,8,9};

//    cout<<Sorted(arr, 9)<<endl;
   
// }

// void inc(int n)
// {
//     if(n == 1)
//     {
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
    
// }

// void dec(int n)
// {
//     if(n == 0)
//     {
//         return;
//     }

//     cout<<n<<endl;
   
//    dec(n-1);
// }

// int main ()
// {
//     int n;
//     cin>>n;

//     dec(n);
//     inc(n);

// }

//Q. find the first occurence and last occurence of a number in an array ##

// int firstocc(int arr[], int n,int i,int key)
// {   
//     if(i == n)
//     {
//         return -1;
//     }
//     if(arr[i] == key)
//     {
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }

// int lastocc(int arr[],int n, int i,int key)
// {   
//     if(i == n)
//     {
//         return -1;
//     }
//     int restArray = lastocc(arr,n,i+1,key);
//     if(restArray != -1)
//     {
//         return restArray;
//     }
//     if(arr[i] == key)
//     {
//         return i;
//     }
//     return -1;
// }

// int main ()
// {  int n;
//    cin>>n;
//    int arr[n];
   
//    for(int i=0; i<n; i++)
//    {
//       cin>>arr[i];
//    }
//    cout<<"Enter the finding number:"<<endl;
//    int key;
//    cin>>key;
//    cout<<firstocc(arr,n,0,key)<<endl;
//    cout<<lastocc(arr,n,0,key)<<endl;
// }

//RECURSION ADVANCED LEVEL ##:
//Q.reverse a string ##

// void reverse(string s)
// {
//     if(s.length() == 0)
//     {
//         return;
//     }

//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }

// int main ()
// {
//    string s;
//    cin>>s;
//    reverse(s);
// }

//Q. Replace pi with 3.14,,"pippxxppiixipi" ##

// void replacePi(string s)
// {   
//     if(s.length()==0)
//     {
//         return ;
//     }
//     if(s[0]=='p' && s[1]=='i')
//     {
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }

// int main ()
// {
//    string s;
//    cin>>s;
//    replacePi(s);
// 
//Q. TOWER OF HANOI ##

// void towerofHanoi(int n, char src, char dest, char help)
// {   
//     if(n == 0)
//     {
//         return;
//     }
//     towerofHanoi(n-1,src,help,dest);
//     cout<<"Move From"<<src<<"To"<<dest<<endl;
//     towerofHanoi(n-1,help,dest,src);
// }

// int main ()
// {   
//     int n;
//     cin>>n;
//     towerofHanoi(n,'A','C','B');
// }

//Q.Remove all duplicates from a string ##

// string removeDuplicate(string s)
// {
//     if(s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = removeDuplicate(s.substr(1));

//     if(ch == ans[0])
//     {
//         return ans ;
//     }
//     else
//     {
//         return ch+ans;
//     }
// }

// int main ()
// {
//    string s;
//    cin>>s;
//    cout<<removeDuplicate(s)<<endl;
// }

// Q. Remove all x to the last indexes of a string ##

// string moveAllx(string s)
// {
//     if(s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveAllx(s.substr(1));

//     if(ch == 'x')
//     {
//         return ans + ch;
//     }
//     else
//     {
//         return ch+ans;
//     }
    
// }

// int main ()
// {
//    string s;
//    cin>>s;
//    cout<<moveAllx(s)<<endl;
// }

//Q.print all the posible substring of a string ##

// void subseq(string s, string ans)
// {   
//     if(s.length()== 0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);

//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }

// int main ()
// {
//   subseq("ABC","");
// }

//Q.Generate substrings with ascii numbers ##
//  void subseq(string s, string ans)
// {   
//     if(s.length()== 0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans + to_string(code));
// }

// int main ()
// {
//   subseq("AB","");
// }
