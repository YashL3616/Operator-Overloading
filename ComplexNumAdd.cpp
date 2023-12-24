//Direct method
//Syntax
/*returntype Operator +(Parameter list)
returntype can be int/void/class name
if class name then returns something and need object defination in param liest
*/

//using method 1 =direct
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace  std;
class Complex
{
    public:
    int real;
    int imag;
    Complex()
    {
        real=0;
        imag=0;
    }
    
    Complex(int r,int i)
    {
         real=r;
         imag=i;
    }
    void display()
    {
        cout<<"Complex="<<real<<"+"<<imag<<"i"<<endl;
    }
    
    //overload
    Complex operator+(Complex c2)  //ie c(temp.real,temp.imag)
     //its c1+c2  c1 is operator 
    {
        Complex temp;
        temp.real=real+c2.real;  //6=2+4 c1.real+c2.real
        temp.imag=imag+c2.imag;
        return temp;
    }
    //equivalent to
    // Complex addComplex(Complex a, Complex b) {
    // Complex temp;
    // temp.real = a.real + b.real;
    // temp.imag = a.imag + b.imag;
    // return temp;
//}

};
int main() {
Complex c1(2,3);  //c1(real,imag)
Complex c2(4,5);  //c2(real,imag)
Complex c3=c1+c2; //c3=c1.addComplex(c2)  read like this
    //c1(2)+c2(4)
    //c1(4)+c2(5)
c1.display();
c2.display();
c3.display();


// int x=10;
// int y=20;
// int z=x+y;
// cout<<"Z="<<z;

    return 0;
}


//Using Friend FUnction easy
#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << "Complex=" << real << "+" << imag << "i" << endl;
    }

    // Declare the friend function
    friend Complex operator+(Complex c1, Complex c2);

    // You can keep the rest of your class as it is...
};

// Define the friend function outside the class
Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
//temp ==c3  equivalence
//c1.real=c1
//c2.real=c2

// Complex operator+(Complex c1, Complex c2) {
//     Complex c3; //c3 or temp
//     c3.real = c1.real + c2.real;
//     c3.imag = c1.imag + c2.imag;
//     return c3;

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2; // Now, you can use the overloaded + operator with friend function

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
