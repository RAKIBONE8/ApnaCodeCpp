#include<iostream>
using namespace std;
/*
void primeSieve(int n)
{
    int prime[n+1] = {0};
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j] = 1;
            }
        }
    }

    for(int i=2; i<=n ; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main ()
{
   int n;
   cin>>n;
   primeSieve(n);
} */

//Q.prime factorization using sieve ##
/*
void primefactor(int n)
{
    int spf[n+1] = {0};
    for(int i=2; i<=n; i++)
    {
        spf[i] = i;
    }
    for(int i=2; i<=n; i++)
    {
       if(spf[i] == i)
       {
          for(int j = i*i; j<=n; j+=i)
            {
               if(spf[j] == j)
                {
                  spf[j] = i;
                }
            }
       }
    }
    while(n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
    
}

int main ()
{
    int n;
    cin>>n;
    primefactor(n);

} */


//Q.print greatest common divisor ##
/*
int gcd( int a, int b)
{
    while(b != 0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
     return a;
}

int main ()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
}
*/