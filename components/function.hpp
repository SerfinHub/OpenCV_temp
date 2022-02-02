#ifndef function
#define function

#include <iostream>

class Math
{
protected:
    Math()
        : a(1), b(2), c(3)
    {
    }
    int a;
    int b;
    int c;
};

class Adder : public Math
{
public:
    int value;
    printL();
};

#endif // function