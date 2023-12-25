//Note..We can not use non-member function in binary with :: can do it with frnd funct syntax
//+ using Member Function
#include <iostream>
using namespace  std;
class Overload
{
    public:
    int value1;
    int value2;
    Overload()  //defalut constructor
    {
        value1=0;
        value2=0;
    }
    
    Overload(int v1,int v2) 
    {
         value1=v1;
         value2=v2;
    }
    void display()
    {
        cout<<"Overload="<<"("<<value1<<","<<value2<<")"<<endl;
    }
    
    //overload
    Overload operator+(Overload c2)  //ie c(value3.value1,value3.value2)
     //its c1+c2  c1 is operator 
    {
        Overload value3;
        value3.value1=value1+c2.value1;  //6=2+4 c1.value1+c2.value1
        value3.value2=value2+c2.value2;
        return value3;
    }

};
int main() {
Overload c1(2,3);  //c1(value1,value2)
Overload c2(4,5);  //c2(value1,value2)
Overload c3=c1+c2; //c3=c1.addOverload(c2)  read like this

c1.display();
c2.display();
c3.display();



    return 0;
}


//+ using friend funct
#include <iostream>
using namespace std;

class Overload
{
public:
    int value1;
    int value2;

    Overload()
    {
        value1 = 0;
        value2 = 0;
    }

    Overload(int v1, int v2)
    {
        value1 = v1;
        value2 = v2;
    }

    void display()
    {
        cout << "Overload=(" << value1 << "," << value2 << ")" << endl;
    }

    friend Overload operator+(const Overload& c1, const Overload& c2);
};

Overload operator+(const Overload& c1, const Overload& c2)
{
    Overload result;
    result.value1 = c1.value1 + c2.value1;
    result.value2 = c1.value2 + c2.value2;
    return result;
}

int main()
{
    Overload c1(2, 3);
    Overload c2(4, 5);
    Overload c3 = c1 + c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}


//+ using non-member
//only defination..no declaration
#include <iostream>
using namespace std;

class Overload
{
public:
    int value1;
    int value2;

    Overload()
    {
        value1 = 0;
        value2 = 0;
    }

    Overload(int v1, int v2)
    {
        value1 = v1;
        value2 = v2;
    }

    void display()
    {
        cout << "Overload=(" << value1 << "," << value2 << ")" << endl;
    }
};

Overload operator+(const Overload& c1, const Overload& c2)
{
    Overload result;
    result.value1 = c1.value1 + c2.value1;
    result.value2 = c1.value2 + c2.value2;
    return result;
}

int main()
{
    Overload c1(2, 3);
    Overload c2(4, 5);
    Overload c3 = c1 + c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}


