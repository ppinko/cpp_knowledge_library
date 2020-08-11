#include <complex>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cmath>

/*
Exercise 1
*/

int main()
{   
    // Exercise 1 Compute real and imaginary part of z = (i−4) / (2i−3)
    std::complex<double> c1 = std::complex<double>(-4, 1);
    std::complex<double> c2 = std::complex<double>(-3, 2);
    std::complex<double> z1 = c1 / c2;
    std::cout << "z1 = " << z1 << std::endl;   // (1.07692,0.384615)

    // 2.Compute the absolute value and the conjugate of z= (1 +i)^6; w=i^17
    std::complex<double> z2 = std::pow(std::complex<double>(1, 1), 6);
    std::cout << "Abs z2 = " << std::abs(z2) << std::endl;   // 8   

    std::complex<double> w1 = std::pow(std::complex<double>(0, 1), 17);
    std::cout << "Abs w1 = " << std::abs(w1) << std::endl;   // 1

    // 3.Write in the “algebraic” form (a+ib) the following complex numbers z=i^5+i+1, w= (3 + 3i)^8 
    std::complex<double> c3 = std::complex<double>(1, 1);
    std::complex<double> c4 = std::pow(std::complex<double>(0, 1), 5);
    std::complex<double> z3 = c3 + c4;
    std::cout << "z3.real = " << z3.real() << " z3.img = " << z3.imag() << std::endl;   // 8   

    std::complex<double> w2 = std::pow(std::complex<double>(3, 3), 8);
    std::cout << "w2.real = " << w2.real() << " w2.img = " << w2.imag() << std::endl;

    

    return 0;
}