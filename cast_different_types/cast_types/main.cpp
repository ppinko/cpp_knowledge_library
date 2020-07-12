#include <iostream>
#include <typeinfo>

void print (char * str) {
        std::cout << str << std::endl;
    }

int main()
{
    // EXAMPLE 1 explicit conversion
    short a=2000;
    int b;
    b = (int) a;    // c-like cast notation
    b = int (a);    // functional notation

    // EXAMPLE 2 dynamic_cast
    class CBase { };
    class CDerived: public CBase { };

    CBase c; CBase* pc;
    CDerived d; CDerived* pd;

    pc = dynamic_cast<CBase*>(&d);     // ok: derived-to-base
    // pd = dynamic_cast<CDerived*>(&c);  // wrong: base-to-derived


    // EXAMPLE 2.5 static_cast

    CBase * h = new CBase;
    CDerived * j = static_cast<CDerived*>(h);

    double k=3.14159265;
    int l = static_cast<int>(k);

    // EXAMPLE 3 const_cast

    const char * e = "sample text";
    print ( const_cast<char *> (e) );

    return 0;

    // EXAMPLE 4 typeid

    int * f,g;
    f=0; g=0;
    if (typeid(a) != typeid(b))
    {
        std::cout << "f and g are of different types:\n";
        std::cout << "f is: " << typeid(f).name() << '\n';
        std::cout << "g is: " << typeid(g).name() << '\n';
    }
    return 0;
}
