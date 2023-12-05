// factorial.cpp
#include <iostream>

extern "C" {
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
}

int main() {
    std::cout << "factorial(5) = " << factorial(5) << std::endl;
    return 0;
}


