#include<iostream>

using namespace std;

class student
{   
    public:

    string name;
    int age;
    bool gender;

    student()
    {
        cout<<"default constructor"<<endl;
    }

    student(string s, int a, bool g)
    {   cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor

    student(student &a)
    {   cout<<"Default constructor"<<endl;
        name = a.name;
        age = a. age;
        gender = a.gender;
    }

    ~student()
    {
        cout<<"distructor called"<<endl;
    }

    void getName()
    {
        cout<<name<<endl;
    }

    void printInfo()
    {
        cout<<"name = ";
        cout<<name<<endl;
        cout<<"age = ";
        cout<<age<<endl;
        cout<<"gender = ";
        cout<<gender<<endl;
    }
    

    bool operator == (student  &a)
    {
       if(name == a.name && age == a.age && gender == a.gender )
       {
        return true;
       }
       return false;
       

    }
    

};

int main ()
{
    /*
    student a;
    a.name = 'rakib';
    a.age = 17;
    a.gender = 0;
    */

    // student arr[3];
    // for(int i=0;i<3;i++)
    // {   
    //     cout<<"Name = ";
    //     cin>>arr[i].name;
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0;i<3;i++)
    // {
    //     arr[i].printInfo();
    // }
        
    student a ("Rakib",17,0);
    a.printInfo();
    student b("rahul",21,0);// default case
    student c = a;

    if(c==a)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
       

}