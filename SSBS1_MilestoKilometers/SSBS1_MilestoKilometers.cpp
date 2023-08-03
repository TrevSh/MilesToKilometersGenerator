// This program converts miles to kilometers
#include <iostream>

int main()
{
    double miles = 0;
    double kilometer = 1.609;
    std::cout << "Enter the miles you need converted to kilometers: ";
    while(std::cin >> miles){
    double result = (miles * kilometer);
    std::cout << "\n\n" << miles << " miles is equal to " << result << " kilometers.\n";
    }
    system("pause");
}