#include <iostream>

using namespace std;

class A{
  
  public:
    const static int x = 42;
    int b;

    static int func() 
    {
        b = 52;
        return(x);
    }
};

int main()
{
    A obj;
    // A obj1;
    
    // cout<<obj.x;
    cout <<obj.func();

    return 0;
}
