#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl; // print a greeting message
    std::cout << 5 << '\n';                    // using \n is better because it doesnt flush like endl
    std::cout << -6.7;                         // print the literal number `-6.7`
    std::cout << 'H';                          // print the literal character `H`
    std::cout << "Hello" << "\n";              // print the literal text `Hello`

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << " bombaclatt" << '\n';
    return 0;
}
