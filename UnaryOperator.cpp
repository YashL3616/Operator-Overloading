//Overloading basic */+/..-

// +  As  A Non-member Function
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
    Overload operator+(int value2);
};
Overload Overload::operator+(int value2)
{
    return Overload(value1 + value2);
}
int main()
{
    Overload a1(6);
    Overload a2 = a1 + 5;
    cout << "After overload" << a2.getoverload();
    return 0;
}


 //+ as a Member Function
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
   
    Overload operator+(int value2)
{
    return Overload(value1 + value2);
}
};
int main()
{
    Overload a1(6);
    Overload a2 = a1 + 5;
    cout << "After overload" << a2.getoverload();
    return 0;
}


//+as a friend Function
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
   
     friend Overload operator+(const Overload &value1,const Overload &value2); //friend class  //without const..not work
//jya operands vr + - ..operands lagnar a ..te sagle aat paramteter mhunun ghyayche

};
Overload operator+(const Overload &value1,const Overload &value2)
{
    return Overload(value1.value1+value2.value1);
}

int main()
{
    Overload a1(6);
    Overload a2 = a1 + 5;
    cout << "After overload" << a2.getoverload();
    return 0;
}


//change + - /  ++ --(with inc decr only pass a1=a1++  not a1=a1++5 wrong)

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//++ 
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
    Overload operator++(int value2);
};
Overload Overload::operator++(int value2)
{
    return Overload(value1 + value2);
}
int main()
{
    Overload a1(6);
    Overload a2 = a1 ++ ;
    cout << "After overload" << a2.getoverload();
    return 0;
}

//-  even if - occured down..addition will take place
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
    Overload operator-(int value2);
};
Overload Overload::operator-(int value2)
{
    return Overload(value1 + value2);
}
int main()
{
    Overload a1(6);
    Overload a2 = a1 - 5;
    cout << "After overload" << a2.getoverload();
    return 0;
}

// "/"
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
    Overload operator/(int value2);
};
Overload Overload::operator/(int value2)
{
    return Overload(value1 + value2);
}
int main()
{
    Overload a1(6);
    Overload a2 = a1 / 5;
    cout << "After overload" << a2.getoverload();
    return 0;
}

//  "
#include <iostream>
using namespace std;
class Overload
{ 
    public:
    int value1;
    Overload(int abc)
    {
        value1 = abc;
    }
    int getoverload()
    {
        return value1;
    }
    Overload operator*(int value2);
};
Overload Overload::operator*(int value2)
{
    return Overload(value1 + value2);  //anyoperator above..that invokes this inside functionality  
}
int main()
{
    Overload a1(6);
    Overload a2 = a1 *5;
    cout << "After overload" << a2.getoverload();
    return 0;
}

