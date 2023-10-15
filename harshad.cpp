#include <iostream>

bool isHarshad(int num) {
    int sum = 0;
    int originalNum = num;

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    return (originalNum % sum == 0);
}

int main() {
    int number;

    // Input the number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is a Harshad number
    if (isHarshad(number)) {
        std::cout << number << " is a Harshad number." << std::endl;
    } else {
        std::cout << number << " is not a Harshad number." << std::endl;
    }

    return 0;
}
