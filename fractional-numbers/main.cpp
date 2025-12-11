#include <iostream>
#include <iomanip>

int main()
{
    float number1{1.12345678901234567890f}; // float numbers need an f at the end to make c++ treat it like a
    // float number instead of a double
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L}; // long needs the L at the end to make it treat like a long double

    // print out sizes
    std::cout << std::setprecision(20);                          // control the precision form std::cout;
    std::cout << sizeof(number1) << " " << number1 << std::endl; // precision : 7
    std::cout << sizeof(number2) << " " << number2 << std::endl; // precision : 15 ish
    std::cout << sizeof(number3) << " " << number3 << std::endl; // precision : 15+

    std::cout << "-------------------------" << std::endl;

    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8}; // Can ommit the lower 00023
                             // for simplicity if our application allows that.
    double number8{0.00000000003498};
    double number9{3.498e-11}; // multiply with 10 exp(-11)

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    // Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10{-5.6};
    double number11{}; // Initialized to 0
    double number12{}; // Initialized to 0

    // Infinity
    double result{number10 / number11};

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

    // NaN
    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0;
}