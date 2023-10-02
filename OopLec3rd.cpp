#include<iostream>
using namespace std;

//Function overloading

/*
class ApnaCollege
{
    public:

    void func()
    {
        cout<<"I am a function with 0 arguments"<<endl;
    }
    void func(int n)
    {
        cout<<"I am a function with int argument"<<endl;
    }
    void func(double x)
    {
        cout<<"I am a function with double arguments"<<endl;
    }
};

int main ()
{
    ApnaCollege obj;
    obj.func();
    obj.func(18);
    obj.func(3.14);
}
*/

// Operator Overloading 

/*
class Complex 
{
    private:
    int real,imag;

    public:
    Complex(int r=0,int i=0)
    {
        real = r;
        imag = i;
    } //parameterised constructor

    

    Complex operator + (Complex const  &obj) 
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
       cout << real <<" + i"<< imag << endl;
    }


};

int main ()
{
    Complex c1(12,7),c2(6,7);

    
    Complex c3 = c1 + c2;
    
    c3.display();

    return 0;
      
}
*/

//Function overriding ##
// Here see how we achieve runtime polymorphism using vertual function ##

class base 
{
public:
    virtual void print()
    {
        cout<<"this is the base class's print funtion"<<endl;
    }
    void display()
    {
        cout<<"this is the base class's display function"<<endl;
    }
};

class derived :public base
{
    void print()
    {
        cout<<"this is the derived class's print funtion"<<endl;
    }
    void display()
    {
        cout<<"this is the derived class's display function"<<endl;
    }
};

int main ()
{
   base *baseptr; //pointer

   derived d;
   baseptr = &d; //allocating to derived class

   baseptr -> print();
   baseptr -> display();

}