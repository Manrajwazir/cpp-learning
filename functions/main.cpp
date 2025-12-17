#include <iostream>

int getValueFromUser()
{
    std::cout << "Please enter an integer value: ";
    int value{};
    std::cin >> value;
    return value;
}

int doubleValue(int value)
{
    return value * 2;
}

int main()
{
    int userValue{getValueFromUser()};
    int doubleValueResult{doubleValue(userValue)};
    std::cout << "you entered: " << userValue << " and double of that is: " << doubleValueResult << '\n';
    return 0;
}
