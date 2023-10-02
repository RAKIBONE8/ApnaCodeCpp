#include<iostream>
using namespace std;

//rectangle
/*
int main ()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

//hollow rectangle
/*
int main ()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//inverted pyramide
/*
int main ()
{
    int row;
    cin>>row;

    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
*/

// Half pyramide after 180 degree
/*
int main ()
{
    int row;
    cin>>row;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

// Half pyramide using number
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/

//Inverted Half pyramide using number

/*
int main ()
{
    int n;
    cin>>n;

    for(int i=n;i>=1;i--)
    {
       for(int j=1;j<=i;j++)
       {
        cout<<j<<" ";
       }
       cout<<endl;
    }
}
*/

//Half Pyramid using number - 2
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
*/

// Print inverted pyramid using number - 2
/*
int main ()
{
    int n;
    cin>>n;
    int k=1;

    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            
        }
        k++;
        cout<<endl;
    }
}
*/

// Floyds Triangle
/*
int main()
{
    int n;
    cin>>n;
    int k = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
*/

//Print 0-1 pyramide
/*
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2 == 0)
            {
                cout<<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//Palindromic pyramid
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        int k = 2;
        if(i>=2){
        for(int j=1;j<i;j++)
        {
            cout<<k;
            k++;
        }
        }
        
        cout<<endl;
    }
}
*/

//Diamond pattern
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

//Hollow Diamond
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if( j==1 || j==2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
           if( j==1 || j==2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//Hollow Diamond in a rectangle
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if( j==1 || j==2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*i-1;j++)
        {
           if( j==1 || j==2*i-1)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

// Print solid Rhombus
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

//Print hollow rhombos
/* 
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n)
            {
                cout<<"*";
            }
            else if(j==1||j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//Pyramid pattern for numbers
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
*/

//Pattern pyramid for numbers-2
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

*/

//print solid butterfly
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

//Print Hollow Butterfly
/*
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            if(j==1||j==i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1||j==i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
           if(j==1||j==i)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//Zig Zag pattern

/*
int main ()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if((i+j)%4==0 ||((i==2)&&(j%4)==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}
*/

int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}