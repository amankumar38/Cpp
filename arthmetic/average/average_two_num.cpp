#include <iostream>
#include <cmath>

class average{
public:
    float frist_number, second_number, sum, average;

void values()
{
    std::cout << "Enter the Frist number: " << std::endl;
    std::cin >> frist_number;

    std::cout << "Enter the second number: " << std::endl;
    std::cin >> second_number;
}

void average_of_two_numbers()
{

    sum = frist_number + second_number;
    average = sum / 2;

    std::cout << "Sum of Two numbers is : " << sum <<std::endl
              << "Average of Two numbers is : " << average <<std::endl;
}
};

int main(int argc, char const *argv[])
{
    average myAverage;
    
    myAverage.values();

    myAverage.average_of_two_numbers();

    return 0;
}
