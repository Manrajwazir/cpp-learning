#include <iostream>
int sum(int i, int x)
{
    int value = i + x;
    return value;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Manraj" << i + 1 << std::endl;
    }

    int ans = sum(5, 8);
    std::cout << ans << std::endl;

    int number1 = 15;         // decimal
    int number2 = 017;        // octal
    int number3 = 0x0f;       // hexa decimal
    int number4 = 0b00001111; // binary

    // will return every number as 15
    std::cout << number1 << number2 << number3 << number4 << std::endl;
    // curly braces initialization the best tremember that
    signed int bad_value{-12321}; // but if we use unsigned here the negative values throw compiler error
    return 0;
}
